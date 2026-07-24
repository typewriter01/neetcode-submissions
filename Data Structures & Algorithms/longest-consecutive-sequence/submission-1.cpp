class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if (n==0) return 0;
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int count=1;
        int maxcount=1;
        auto it = s.begin();
    int prev = *it;
    ++it;

    for (; it != s.end(); ++it) {
        int curr = *it;
        int diff = curr - prev;
        if (diff==1)count++;
        else count =1;
        maxcount =max(maxcount, count);
        prev = curr;
    }
        return maxcount;
    }
};
