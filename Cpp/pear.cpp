#include<iostream>
using namespace std ; 
int main (){
    int tgHeight; 
    cout << "Enter Height : "; 
    cin >> tgHeight ;

    for(int i = 0 ; i < tgHeight ; i++){
        for(int bl = 0 ; bl < i ;  bl++){
            cout << " ";
        }
        for(int j = 0 ; j < tgHeight - i ; j++ ){
            cout << "* ";
        }
        cout << endl ;
    }
    
    
    return 0 ;
}


// * * * * * 
//  * * * * 
//   * * *
//    * *
//     *