class Solution {
public:
    int compress(vector<char>& chars) {
        int count=1;
        vector<char>ans;

        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]){
                count++;
            }
            else{
                ans.push_back(chars[i-1]);

                if(count>1){
                    string s=to_string(count);
                    for(auto x:s){
                        ans.push_back(x);
                    }
                }

                count=1;
            }
        }

        ans.push_back(chars[chars.size()-1]);

        if(count>1){
            string s=to_string(count);
            for(auto x:s){
                ans.push_back(x);
            }
        }

        for(int i=0;i<ans.size();i++){
            chars[i]=ans[i];
        }

        return ans.size();
    }
};