class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     vector<int> ans;
    int n=nums.size();
    int m = n / 3;

unordered_map<int, int> freq;

for (int x : nums) {
    freq[x]++;
}

for (auto p : freq) {
    if ( p.second> m) {
        ans.push_back(p.first);
    }
}

return ans;   
    }
};