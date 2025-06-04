class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        int len = arr.size();
        for(int i = len-1; i > 0; i--){
            for( int j = 0; j < i; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j], arr[j+1]);
                }
            }
        }
        
    }
};