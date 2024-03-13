class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0, piv = 0;
        while(n > 0){
            sum = n*(n+1)/2;
            piv += n;
            if (sum == piv) return n;
            n--;
        }
        return -1;
    }
};