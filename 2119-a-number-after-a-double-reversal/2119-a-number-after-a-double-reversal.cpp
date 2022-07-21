class Solution {
public:
    bool isSameAfterReversals(int num) {
        string str = to_string(num);
        
        reverse(str.begin() , str.end());
        
        int index = stoi(str);
        
        string str2 = to_string(index);
        
        reverse(str2.begin() , str2.end());
        
        int ans = stoi(str2);
        
        if(ans == num)
            return true;
        
        return false;
    }
};