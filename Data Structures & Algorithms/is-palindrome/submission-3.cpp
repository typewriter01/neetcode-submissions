class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n= s.length();
        int i=0,j=n-1;
        while(i<j){
            while(!isalnum(s[i]) && i<j)i++;
            while(!isalnum(s[j]) && j>i)j--;
            if(s[i]!= s[j])return false;
            else {
                j--;
                i++;
            }
        }
        return true;
    }
};
