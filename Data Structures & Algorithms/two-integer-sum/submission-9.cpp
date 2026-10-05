class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, vector<int>> subjectMap;

        for(int i = 0; i < nums.size(); i++)
        {
            subjectMap[nums[i]].push_back(i);
        }

        for(int i = 0; i < nums.size(); i++)
        {
            int difference = target - nums[i];
            auto targetPair = subjectMap.find(difference);

            if(targetPair != subjectMap.end())
            {
                if(difference == nums[i])
                {
                    if(targetPair->second.size() > 1)
                    {
                        return {i, targetPair->second[1]};
                    }
                }
                else
                {
                    return {i, targetPair->second[0]};
                } 
            }
        }
    }
};
