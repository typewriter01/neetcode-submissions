class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0;
        int maxcount = 0;

        for (int right = 0; right < s.length(); right++) {
            // If the character was seen and is INSIDE the current window
            if (mp.find(s[right]) != mp.end()) {
                left = max(left, mp[s[right]] + 1);
            }

            mp[s[right]] = right; // Update last seen index
            maxcount = max(maxcount, right - left + 1);
        }

        return maxcount;
    }
};