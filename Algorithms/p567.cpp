class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        
        // Mapas de conteo de caracteres
        unordered_map<char, int> mapS1, mapS2;
        
        // Llenar el mapa de s1 con la frecuencia de caracteres
        for (char c : s1) {
            mapS1[c]++;
        }
        
        int windowSize = s1.size();
        
        // Inicializar el mapa para la primera ventana en s2
        for (int i = 0; i < windowSize; i++) {
            mapS2[s2[i]]++;
        }
        
        // Función para comparar dos mapas
        auto areMapsEqual = [&]() {
            for (auto &pair : mapS1) {
                if (mapS2[pair.first] != pair.second) {
                    return false;
                }
            }
            return true;
        };
        
        // Revisar si la primera ventana es una permutación
        if (areMapsEqual()) {
            return true;
        }
        
        // Ventana deslizante sobre el resto de s2
        for (int i = windowSize; i < s2.size(); i++) {
            // Añadir el nuevo carácter al final de la ventana
            mapS2[s2[i]]++;
            
            // Remover el carácter que sale de la ventana
            char toRemove = s2[i - windowSize];
            mapS2[toRemove]--;
            
            // Si el valor se reduce a 0, eliminar la clave
            if (mapS2[toRemove] == 0) {
                mapS2.erase(toRemove);
            }
            
            // Comparar si la ventana actual es una permutación de s1
            if (areMapsEqual()) {
                return true;
            }
        }
        
        return false;
    }
};
