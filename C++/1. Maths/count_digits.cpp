#include <iostream>
#include <fstream>

using namespace std;
    

int main() {
    int input_number;
    ifstream inputFile("input.txt");
    inputFile >> input_number;
    int num1, num2 = 0;
    int counter=0;
    num1 = input_number;
    while(num1 > 0){
        num2 = num1 % 10;
        if(num2 != 0){
            if(input_number % num2 == 0){
                counter++;
            }
        }
        num1 = num1/10;
    }
    cout << counter << endl;
    return 0;
}