class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int len = arr.size();
        int min_index  = 0;
        int min = 0;
        for(int i = 0; i <= len-1; i++){
            min_index = i;
            min = arr[min_index];
            for(int j = i; j <= len-1; j++){
                if(arr[j] < min){
                    min_index = j;
                    min = arr[j];
                }
            }
            arr[min_index] = arr[i];
            arr[i] = min;
        }
        
    }
};