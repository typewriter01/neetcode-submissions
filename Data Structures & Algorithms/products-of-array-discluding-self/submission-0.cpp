class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n,0);
        vector<int> suffix(n,0);
        vector<int> res;
        int prod=1;
        for(int i=0; i<n;i++){
            prod = prod*nums[i];
            prefix[i]=prod;
        }
        prod=1;
        for(int i=n-1; i>=0;i--){
            prod = prod*nums[i];
            suffix[i]=prod;
        }
        for(int i=0; i<n;i++){
            if(i==0){
                res.push_back(suffix[i+1]);
            }
            else if(i==n-1){
                res.push_back(prefix[i-1]);
            }
            else {
                res.push_back(prefix[i-1]*suffix[i+1]);
            }
        }
        return res;
    }
};
