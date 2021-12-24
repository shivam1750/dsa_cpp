//7) WRITE A program to display all even no. from 1 to 50 
#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    for (int i = 0; i <= 50 ; i++)
    {
        if (i%2 == 0)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0 ;
}

