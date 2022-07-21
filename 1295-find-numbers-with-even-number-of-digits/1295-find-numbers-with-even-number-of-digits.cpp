class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len = nums.size();
        int ans = 0;
        for(int i = 0 ;i < len; i++){
            int a = nums[i];
            
            string str = to_string(a);
            
            if(str.length() % 2 == 0){
                ans++;
            }
        }
        return ans;
    }
};