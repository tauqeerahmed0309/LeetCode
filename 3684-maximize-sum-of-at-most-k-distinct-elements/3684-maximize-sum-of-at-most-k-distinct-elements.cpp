class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        vector<int>ans;
        int count=0;
        set<int> maxi(nums.begin(),nums.end());
        for(auto i=maxi.end(); i!=maxi.begin(); ){
            i--;
            ans.push_back(*i);
            count++;
            if(count==k){
                break;
            }
        }
        return ans;

    }
};