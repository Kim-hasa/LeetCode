class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        
        vector<int> ans;
        
        int sum = 0;
        
        int count = 1;
        
        for(int i=len-1; i>=0; i--){
            int index = digits[i] + count;
            
            if(index == 10){
                count = 1;
                ans.push_back(0);
            }
            else {
                count = 0;
                ans.push_back(index);
            }
        }
        
        if(count == 1){
            ans.push_back(1);
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};