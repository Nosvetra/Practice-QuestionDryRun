#include <iostream> 
using namespace std ; 
int main (){
    int userInput ; 
    cout << "Enter the Value for Factorial : " ; 
    cin >> userInput ; 
    int temp = 1; 
    for(int i = 1 ; i <= userInput ; i++){
        temp = temp * i ; 
    }
    cout<< temp ; 
    return 0 ; 

}

// 1*2*3*4*5