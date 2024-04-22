class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> pascal_triangle;
        vector<int> result;
        for(int i = 0; i < rowIndex+1; i++){
            vector<int> aux(i+1, 1);
            for (int j = 1; j < i; j++){
                aux[j] = pascal_triangle[i-1][j] + pascal_triangle[i-1][j-1];
            }
            if (i == rowIndex){
                result = aux;
                break;
            }
            pascal_triangle.push_back(aux);
        }
        return result;
    }
};