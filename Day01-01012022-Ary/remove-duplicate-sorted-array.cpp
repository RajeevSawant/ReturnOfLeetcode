class Solution {
public:
    /*
        --> check the current and the next elem
        --> if they are = then erase the cur 
        --> if not move ahead
    */ 
    
    int removeDuplicates(vector<int>& nums) {
        
       int nums_size = nums.size();
        //int unq_elem = 0;
        
        if (!nums_size) return 0;
        
        for (int i = 0; i < nums.size() - 1; i++){
            
            if (nums[i] == nums[i + 1]){
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        
        return nums.size();
    }
};
