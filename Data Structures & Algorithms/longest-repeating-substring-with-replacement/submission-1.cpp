class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        vector<int> count(26,0);
        int maxlen=0;
        int maxfeq;
        int l=0;
        for(int r=0;r<n;r++){
            count[s[r]-'A']++;
            maxfeq = max(maxfeq,count[s[r]-'A'] );
            while(((r-l+1)-maxfeq)>k){
                count[s[l]-'A']--;
                l++;
            }
            maxlen= max(maxlen,(r-l+1));
        }
        return maxlen;
    }
};
