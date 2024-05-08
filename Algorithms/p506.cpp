class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
        vector<string> result(score.size());
        vector<int> sorted = score;
        sort(sorted.begin(), sorted.end(), greater<int>()); 
        int k = 1; 
        for (int i = 0; i < score.size(); i++){
            for (int j = 0; j < score.size(); j++){ 
                if (score[j] == sorted[i]){
                    switch (i){
                        case 0:
                            result[j] = "Gold Medal";
                            break;
                        case 1: 
                            result[j] = "Silver Medal";
                            break;
                        case 2:
                            result[j] = "Bronze Medal";
                            break; 
                        default:
                            result[j] = to_string(k);
                    }
                    k++;
                    break; 
                }
            }
        }
        return result;
    }
};
