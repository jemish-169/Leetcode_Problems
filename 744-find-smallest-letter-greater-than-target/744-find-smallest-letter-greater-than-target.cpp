class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        set<char> st(l.begin(),l.end());
        for(char a = t+1;a<='z';a++)
        {
            if(st.find(a) != st.end())
                return a;
        }
        return l[0];
    }
};