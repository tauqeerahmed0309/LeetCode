class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int length=0;
        int longest=0;
        unordered_set<int>st;

        for(auto p:nums){
            st.insert(p);
        }

        for(auto x:st){
            if(st.find(x-1)==st.end()){
                length=1;
                int curr=x;

                while(st.find(curr+1)!=st.end()){
                    curr++;
                    length++;
                }

                longest=max(length,longest);
            }
        }

        return longest;
    }
};