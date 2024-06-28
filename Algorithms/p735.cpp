class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> asteroidStack;
        
        for (int i = 0; i < asteroids.size(); ++i) {
            bool destroyed = false;
            while (!asteroidStack.empty() && asteroidStack.top() > 0 && asteroids[i] < 0) {
                if (abs(asteroidStack.top()) < abs(asteroids[i])) {
                    asteroidStack.pop();
                } else if (abs(asteroidStack.top()) == abs(asteroids[i])) {
                    asteroidStack.pop();
                    destroyed = true;
                    break;
                } else {
                    destroyed = true;
                    break;
                }
            }
            if (!destroyed) {
                asteroidStack.push(asteroids[i]);
            }
        }
        
        vector<int> result(asteroidStack.size());
        for (int i = asteroidStack.size() - 1; i >= 0; --i) {
            result[i] = asteroidStack.top();
            asteroidStack.pop();
        }
        
        return result;
    }
};