class Solution {
public:
    void merge(vector<int> &arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }
    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    for (int k = left; k <= right; k++) {
        arr[k] = temp[k - left];
    }
    }

    void mergeSort(vector<int> &arr, int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    bool hasDuplicate(vector<int>& nums) {
        int n= nums.size();
        mergeSort(nums ,0,n-1);
        for(int i=0; i<n-1; i++){
            if(nums[i]==nums[i+1])return true; 
        }
        return false;
    }
};