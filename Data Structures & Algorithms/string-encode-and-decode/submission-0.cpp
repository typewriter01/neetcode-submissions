class Solution {
public:

    string encode(vector<string>& strs) {
        int n= strs.size();
        string s;
        for(int i=0; i<n;i++){
            int l= strs[i].length();
            s += to_string(l) + "#";
            s += strs[i];
        }
        return s;
    }

    vector<string> decode(string s) {
        int m= s.length();
        int i=0;
        vector<string> v;
        while(i<m){
            int found = s.find('#', i);
            int l = stoi(s.substr(i, found - i));
            v.push_back(s.substr(found + 1, l));
            i = found + 1 + l;
        }
        return v;
    }
};