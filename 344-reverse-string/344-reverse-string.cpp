class Solution {
public:
    int i = 0;
    void reverseString(vector<char>& s) {
        if(i==s.size()/2)
            return;
        char ch = s[i];
        s[i] = s[s.size()-i-1];
        s[s.size()-i-1] = ch;
        i++;
        reverseString(s);
    }
};