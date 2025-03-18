#include<bits/stdc++.h> 
using namespace std;
int main() {
    ifstream inputFile("input.txt");
    string input;
    inputFile >> input;
    cout << input;
    return 0;
}
class Solution {
    public:
        void rotateArray(vector <int>& arr) {
            int temp = arr[0];
            for (int i = 0; i < arr.size() - 1; i++) {
                arr[i] = arr[i + 1];
            }
            arr[arr.size() - 1] = temp;
        }
        bool areTheySame(vector <int>& arr1, vector <int>& arr2) {
            for (int i = 0; i < arr1.size(); i++) {
                if (arr1[i] != arr2[i]) {
                    return false;
                }
            }
            return true;
        }
        bool check(vector <int>& nums) {
            vector <int> arr(nums);
            int n = nums.size();
            sort(arr.begin(), arr.end());
            for (int i = 0; i < n; i++) {
                rotateArray(arr);
                if (areTheySame(nums, arr)) {
                    return true;
                }
            }
        return false;
    }
    
};
