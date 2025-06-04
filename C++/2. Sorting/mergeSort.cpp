class Solution {
  public:
    void merge(vector<int> &arr, int left, int mid, int right){
        int i = left;
        int j = mid+1;
        vector<int> temp_arr;
        while(i <= mid || j <= right){
            if(i <= mid && j <= right){
                if(arr[i] <= arr[j]){
                    temp_arr.emplace_back(arr[i]);
                    i++;
                }
                else {
                    temp_arr.emplace_back(arr[j]);
                    j++;
                }
            }
            else if(i > mid){
                temp_arr.emplace_back(arr[j]);
                j++;
            }
            else {
                temp_arr.emplace_back(arr[i]);
                i++;
            }
        }
        int num = 0;
        for(int i = left; i <= right; i++){
            arr[i] = temp_arr[num];
            num++;
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        
        if(l == r){
            return;
        }
        else
        {
            int mid = l + (r - l) / 2;
            mergeSort(arr, l, mid);
            mergeSort(arr, mid+1, r);
            merge(arr, l, mid, r);
        }
        
    }
};