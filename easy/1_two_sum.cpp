class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> answer;
        for (int i = 0; i < nums.size(); i++) {               // brute force (2 for loops)
            for (int j = (i + 1); j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    answer.push_back(i);
                    answer.push_back(j);
                }
            }
        }
        
        return answer;
    }
};
