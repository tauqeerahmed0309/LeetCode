class Solution{
public:
    vector<int> findMissingElements(vector<int>& nums){
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int j=nums[0];

        for(int i=0;i<nums.size();){
            if(j==nums[i]){
                j++;
                i++;
            }
            else{
                ans.push_back(j);
                j++;
            }
        }

        return ans;
    }
};