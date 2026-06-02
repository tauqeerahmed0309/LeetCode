class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(binary_search(nums.begin(),nums.end(),target)){
            int x=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            return x;
        }
        else
            return -1;
    }
};