class Solution {
    public:
      int getSecondLargest(vector<int> &arr) {
          int second_max = -1;
          int max = -1;
          for(int i = 0; i < arr.size(); i++){
              if(arr[i]  > max){
                  second_max = max;
                  max = arr[i];
              }
              else if(arr[i] > second_max){
                  if(arr[i] != max){
                      second_max = arr[i];
                  }
              }
          }
          return second_max;
      }
  };