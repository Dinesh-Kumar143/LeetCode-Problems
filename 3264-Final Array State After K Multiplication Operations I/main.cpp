class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i< k; i++){
            int minIndex = 0;
            for (int j = 0; j< nums.size(); j++){
                if (minIndex == j) continue;
                if (nums[minIndex] <= nums[j]){
                    continue;
                }
                else {
                    minIndex = j;
                }
            }
            nums[minIndex] *= multiplier;
        }
        return nums;
    }
};