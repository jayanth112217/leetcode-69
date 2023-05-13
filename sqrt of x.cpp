class Solution {
public:
    int mySqrt(int x) {
        long long index=0;
        for(long long i=1;i<=x;i++){
            long long prod = i*i;
            if(prod==(long long)x) return i;
            if(prod>(long long)x) {
                index = i-1;
                break;
            }
        }
        return index;
    }
};