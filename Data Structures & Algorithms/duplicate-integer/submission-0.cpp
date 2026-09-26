class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> Nums;
        
        for(auto n : nums)
        {
            if(Nums.contains(n))
            {
                return true;
            }
            
            Nums.insert(n);
        }    
        return false;
    }
};