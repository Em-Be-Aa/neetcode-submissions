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

            if(targetPair == subjectMap.end())
            {
                continue;
            }

            if(difference == nums[i] && !(targetPair->second.size() > 1))
            {
                continue;
            }

            return {i, targetPair->second[difference == nums[i]]};

        }    
    }
};
