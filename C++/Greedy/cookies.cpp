class Solution {
    public:
        int findContentChildren(vector<int>& g, vector<int>& s) {
    
            std::sort(g.begin(), g.end());
            std::sort(s.begin(), s.end());
            int child = 0;
            int cookie = 0;
            int counter = 0;
    
            while(child < g.size() && cookie < s.size()){
                if(g[child] <= s[cookie]){
                    counter++;
                    child++;
                    cookie++;
                }
                else{
                    cookie++;
                }
            }
            return counter;
        }
    };