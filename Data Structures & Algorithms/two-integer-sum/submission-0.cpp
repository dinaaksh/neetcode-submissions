class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(s.find(val)!=s.end()){
                return{s[val],i};
            }
            s[nums[i]]=i;
        }
        return {-1,-1};    
    }
};
