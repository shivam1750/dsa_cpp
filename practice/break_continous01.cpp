#include<iostream>
#include<iomanip>
using namespace std;

int main(){
// ----- break ---
/*
    for(int i = 0 ; i<4 ; i++)
    {
        cout<< i <<endl;
        if(i==2){
            cout<<" "<<endl;
            break;
        }
        
    }

*/
// ------ continue----
    for(int i = 0 ; i<40 ; i++)
    {
       
        if(i==22){
            continue;
        }
        cout<< i <<endl;
        
    }
    return 0 ;
    
}