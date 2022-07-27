class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(true){
            auto index = find(nums.begin(), nums.end(), original);
            
            if(index == nums.end())
                break;
            
            original *= 2;
        }
        
        return original;
    }
};