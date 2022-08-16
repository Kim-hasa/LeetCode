class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        int small = *min_element(nums.begin(), nums.end());
        
        int sum = 0;
        
        while(small > 0){
            int digit = small % 10;
            sum += digit;
            small /= 10;
        }
        
        if(sum % 2 == 0){
            return 1;
        }
        else {
            return 0;
        }
    }
};