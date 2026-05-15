class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size()-1;

if(binary_search(nums.begin(),nums.end(),target))
{
    int i = lower_bound(nums.begin(), nums.end(), target)-nums.begin();

    int j = upper_bound(nums.begin(), nums.end(), target)-nums.begin();

    return {i, j-1};
}
else {
    return {-1, -1};
}
    }
};