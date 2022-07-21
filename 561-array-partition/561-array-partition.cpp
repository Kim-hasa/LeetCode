class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        
        int ans = 0;
        
        int len = nums.size();
        
        for(int i=0; i<len; i=i+2){
            int a = nums[i];
            int b = nums[i+1];
            
            int index = min(a,b);
            ans += index;
        }
        
        return ans;
    }
};