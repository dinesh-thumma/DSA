#include<bits/stdc++.h> 
using namespace std;

int main(){
        ifstream inputFile("input.txt");
        string s;
        inputFile >> s;
        stack <char> st;
        st.push('$');

        for (int i = 0; i < s.length(); i++){
            if (s[i] == ')' && st.top() == '('){
                st.pop();
            }
            else if  (s[i] == '}' && st.top() == '{'){
                st.pop();
            }
            else if  (s[i] == ']' &&  st.top() == '[' ){
                st.pop();
            }
            else st.push(s[i]);
           
        }
        if (st.top() == '$'){
            cout << " True";
        }
    else cout << "False";     
}

