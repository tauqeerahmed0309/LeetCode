class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n=nums.size();
for (int x : nums) {
    freq[x]++;
}

for (auto p : freq) {
    if (p.second == n / 2) {
        return p.first;
    }
}

return {};
    }
};