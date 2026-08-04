class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        // A permutation of s1 cannot fit in s2 if s1 is longer
        if (n > m) return false;

        vector<int> count1(26, 0), count2(26, 0);

        // Count frequencies for s1 and the initial window of s2
        for (int i = 0; i < n; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        if (count1 == count2) return true;
        for (int i = n; i < m; i++) {
            count2[s2[i] - 'a']++;        
            count2[s2[i - n] - 'a']--;    

            if (count1 == count2) return true;
        }

        return false;
    }
};
