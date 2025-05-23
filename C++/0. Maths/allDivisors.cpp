class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> answer;
        answer.emplace_back(1);
        for(int i=2; i <= n; i++){
            if(n%i == 0){
                answer.emplace_back(i);
            }
        }
        return answer;
    }
};