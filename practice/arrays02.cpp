#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int mark[] = {23, 56 , 76 , 85};
    // for loops 

    for (int  i = 0; i < 4; i++)
    {
        
        cout<< " the vaue of mark "<<i<< " is "<<mark[i]<<endl ; 
    }
     
    // while loops
    int i = 0;
/*
    while (i < 4)
    {
        cout<< " the vaue of mark "<<i<< " is "<<mark[i]<<endl ; 
        i++;
    }
    */
    
    //do while loops 
    do
    {
        cout<< " the vaue of mark "<<i<< " is "<<mark[i]<<endl ; 
        i = i + 1;
    } while (i<4);
    
    return 0 ;
}