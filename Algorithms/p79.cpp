bool dfs(vector<vector<char>>& board, const string& word, int index, int i, int j){
    if (index == word.size()) return true;
    if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[index]) return false;

    char aux = board[i][j];
    board[i][j] = '#';
    bool found = dfs(board, word, index + 1, i + 1, j) ||
                dfs(board, word, index + 1, i - 1, j) ||
                dfs(board, word, index + 1, i, j + 1) ||
                dfs(board, word, index + 1, i, j - 1);
    board[i][j] = aux;
    return found;
}
class Solution {
public:
    bool exist(vector<vector<char>> &board, string word){
        int rows = board.size();
        int columns = board[0].size();
        for (int i = 0; i < rows; i++){
            for (int j = 0; j < columns; j++){
                if (dfs(board, word, 0, i ,j)) return true;
            }
        }
        return false;
    }
};

