#include <iostream> 
using namespace std ; 
int main () { 
    int userInput ; 
    cout << "Enter no to check if it's prime or not : " ; 
    cin  >> userInput ; 
    if(userInput == 0 || userInput < 0 ){
        cout << "The number" << userInput  << " is not PRIME " ; 
        exit(0); 
    }

    for(int i = 2 ; i < userInput ; i++){
        if(userInput % i == 0){
            cout << "The number " << userInput  << " is not PRIME " ;             exit(0); 
        }
    }
    cout << "The number " << userInput  << " is  PRIME " ; 
    return 0 ;
}