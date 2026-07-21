class Solution {
public:
    bool isAnagram(string s, string t) {
        int n= s.length();
        int m= t.length();
        map<char, int > mp1, mp2;
        for( int i=0; i<n;i++){
            if (mp1.find(s[i])!= mp1.end()){
                mp1[s[i]]++;
            }
            else {
                mp1[s[i]] =1;
            }
        }
       for( int i=0; i<m;i++){
            if (mp2.find(t[i])!= mp2.end()){
                mp2[t[i]]++;
            }
            else {
                mp2[t[i]] =1;
            }
        } 
        if (mp1 == mp2)return true;
        else return false;
    }
};
