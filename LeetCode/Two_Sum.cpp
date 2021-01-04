<<<<<<< HEAD
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        for(int i = 0; i < nums.size()-1; i++) {
            for(int j = 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
=======
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        
        for(int i = 0; i < nums.size()-1; i++) {
            for(int j = 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target){
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
        return result;
    }
>>>>>>> 883aa8af0a3c60971792d73bd20d608872fb1f8e
};