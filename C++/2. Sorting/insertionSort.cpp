class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int num = 0;
        int temp = 0;
        for(int i = 1; i < arr.size(); i++){
            num = arr[i];
            arr[i] = INT_MAX;
            for(int j = 0; j <= i; j++){
                if(num < arr[j] ){
                    temp = arr[j];
                    arr[j] = num;
                    num = temp;
                }
            }
        }
        
    }
};