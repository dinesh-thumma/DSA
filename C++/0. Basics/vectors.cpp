#include<iostream>
#include<vector>
using namespace std;
int n;

void function(){
    vector<int> v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v.emplace_back();
    }
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
}

int main(){
    function();
    return 0;
}
