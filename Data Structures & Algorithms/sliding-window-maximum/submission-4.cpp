class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n= nums.size();
        if (k==1)return nums;
        vector <int> res;
        deque<int> dq;
        dq.push_back(nums[0]);
        for(int i=1;i<k;i++){
            if (nums[i]<=dq.back()){
                dq.push_back(nums[i]);
            }
            else {
                while(!(dq.empty() || nums[i]<=dq.back() )){
                    dq.pop_back();
                }
                dq.push_back(nums[i]);
            }
        }
        res.push_back(dq.front());
        for(int i=k;i<n;i++){
            if(nums[i-k]== dq.front()){
                dq.pop_front();
            }
            if (nums[i]<=dq.back()){
                dq.push_back(nums[i]);
            }
            else {
                while(!(dq.empty() || nums[i]<=dq.back() )){
                    dq.pop_back();
                }
                dq.push_back(nums[i]);
            }
            res.push_back(dq.front());
        }
        return res;

    }
};
