class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            for (auto it = nums.begin(); it < nums.end() - 1; it++) {
                if (*(it) == *(it + 1)) {
                    nums.erase(it);
                    it--;
                }
            }
            return nums.size();
        }
    };