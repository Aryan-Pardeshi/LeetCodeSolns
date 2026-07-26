class Solution {
public:
    bool isAnagram(string s, string t) {
        int slength = s.length();
        int tlenght = t.length();
        if (slength != tlenght){
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};
