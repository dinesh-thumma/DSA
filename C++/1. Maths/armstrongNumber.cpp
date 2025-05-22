class Solution {
  public:
    bool armstrongNumber(int n) {
        int input = n;
        int tempDigit=0;
        int sum =0;
        for (int i=0; i<3; i++){
            tempDigit = input%10;
            input = input/10;
            sum = sum + (tempDigit*tempDigit*tempDigit);
        }
        if(n == sum) return true;
        else return false;
    }
};