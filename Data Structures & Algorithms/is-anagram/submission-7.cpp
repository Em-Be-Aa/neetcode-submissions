class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> subjectMap;

        for(auto character : s)
        {
            subjectMap[character]++;
        }

        for(auto character : t)
        { 
            subjectMap[character]--;   
        }

        for(const auto& entry : subjectMap)
        {
            if(entry.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};
