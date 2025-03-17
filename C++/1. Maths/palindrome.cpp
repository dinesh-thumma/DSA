#include<iostream>
#include<fstream>
#include<stack>

using namespace std;
bool isPalindrome(){
    long int input, num2, num3;
    long int rev;
    ifstream inputFile("input.txt");
    inputFile >> input;
    if(input < 0){
        return false;
    }
    else if( input == 0){
        return true;
    }
    else{
        num2 = input;
        rev = 0;
        while(num2 !=0){
            num3 = num2%10;
            num2 = num2/10;
            rev = rev * 10 + num3;
        }
        if(input == rev){
            return true;
        }
        else return false;
    }
}
int main(){
    if(isPalindrome()) cout << "It is a palindrome";
    else cout << "Not a Palindrome";
    return 0;
}