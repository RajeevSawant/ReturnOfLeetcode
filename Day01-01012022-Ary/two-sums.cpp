
    /*
        Ques:
        1. can we have multiple sol 
        2. we shouldnt be using the same number twice right ?
        
        Asum:
         1. I/P is provided in a vector
         2. O/P is to be shared in a vector
    
    
        Aproc:
            --> I plan to use hash table, 
                --> temp var , if the target - current val of array is to be stored in a temp var
                --> if this temp var is to be fnd in hash table 
                
                --> store the index of current val of arr
                --> for each entry of hash table , i will hav ekey value pair , so key would be the array val & value would be the index of that array val
    
    */
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;
        unordered_map<int , int> hash_table;
        int nums_size = nums.size();
        
        for (int i = 0; i < nums_size; i++){
            
            int numx = target - nums[i];
            
            if (hash.find(numx) != hash.end()){
                result.push_back(hash[numx]);
                result.push_back(i);
            }
            
            hash[nums[i]] = i;
        } 
        
        return result;
        
    }
};

