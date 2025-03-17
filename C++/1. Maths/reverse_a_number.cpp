#include <iostream>
#include <fstream>

using namespace std;
    

int main() {
    int input_number;
    ifstream inputFile("input.txt");
    inputFile >> input_number;

    int num1, num2 = 0, num3 = 0;
    int counter=0;
    num1 = input_number;
    if ( num1 < 0){
        while(num1 < 0){
        num2 = num1 % 10;
        num1 = num1/10;
        num3 = num2 + num3 * 10;
    }
    }
    while(num1 > 0){
        num2 = num1 % 10;
        num1 = num1/10;
        num3 = num2 + num3 * 10;
    }

    cout << num3 << endl;
    return 0;
}