class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        string ans="";
        int flag=0;
        for(int i=0;i<s.size();i++){
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=s[i]){
                    flag=1;
                    break;
                }
                else flag=0;
            }
            if(!flag){
                ans+=s[i];
            }
            else break;
        }
        return ans;
    }
};