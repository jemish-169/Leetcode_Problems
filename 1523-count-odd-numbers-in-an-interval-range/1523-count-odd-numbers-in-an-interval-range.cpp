class Solution {
public:
    int countOdds(int l, int h) {
        if(l%2==0&&h%2==0)
            return (h-l)/2;
        if(l%2==1&&h%2==1)
            return (h-l+2)/2;
        else
            return (h-l+1)/2;
    }
};