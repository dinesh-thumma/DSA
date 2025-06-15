class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        if (size <= 1)
            return;
        else {
            for (int i = 0; i < size;) {
                if (nums[i] == 0) {
                    for (int j = i; j < size - 1; j++) {
                        swap(nums[j], nums[j + 1]);
                    }
                    size--;
                } else {
                    i++;
                }
            }
        }
    }
};