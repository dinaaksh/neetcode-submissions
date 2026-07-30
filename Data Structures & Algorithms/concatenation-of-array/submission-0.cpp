class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int i=0;
        while(i<2*n){
            int num=nums[i%n];
            ans.push_back(num);
            i++;
        }
        return ans;
    }
};