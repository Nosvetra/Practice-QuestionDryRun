#include <iostream>
using namespace std ;


int main () {
    int x ; 
    double first = 0 , second = 1 , third = 1 ;
    cout << "Enter number of Terms: "; 
    cin >> x ; 
    if(x == 0){
        exit(0); 
    }else if(x == 1){
        cout << first; 

    }else if(x == 2){
        cout << first << " " << second ; 
    }else{
        cout << first << " " << second << " " << third << " "; 
        for(int  i = 4 ; i <= x ; i++){
        double created = first + second + third ; 
        first = second ; 
        second = third ; 
        third = created ; 
        cout << created  << " "; 
        }  
    }
    
    return 0 ; 
}

// 0 1 1 2 4 7