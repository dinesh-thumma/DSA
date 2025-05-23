class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        vector<int> answer;
        int min, max ;
        int lcm, gcd;
        if(a < b){
            min = a;
            max = b;
        }
        else {
            min = b;
            max = a;
        }
        
        for(int i =1; i<=min; i++){
            if(a%i == 0 & b%i == 0 ){
                gcd = i;
            }
        }
        
        lcm = max;
        for(int j = 1; true; j++){
            if((max*j)%min==0){
                lcm = max*j;
                break;
            }
        }
        
        answer.emplace_back(lcm);
        answer.emplace_back(gcd);
        return answer;
    }
};