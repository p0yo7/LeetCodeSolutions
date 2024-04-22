class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal_triangle;
        for(int i = 0; i < numRows; i++){
            vector<int> aux(i+1, 1);
            for (int j = 1; j < i; j++){
                aux[j] = pascal_triangle[i-1][j] + pascal_triangle[i-1][j-1];
            }
            pascal_triangle.push_back(aux);
        }
        return pascal_triangle;
    }
};