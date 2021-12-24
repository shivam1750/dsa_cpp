#include<iomanip>
#include<iostream>
using namespace std;

int main(){
    // ----- do while loops ---
    /* ---- syntex --
do 
{
    c++ statement;
}
while(condition);
*/ 
/*
int i = 1;
do
{
    cout<<i<<endl;
    i++;
   
}while (i<=100);
*/
int i = 6;
do
{
    cout<<i<<endl;
    i = (i+6);
   
}while (i<=60);

return 0 ;


// in do while loops if condition is false then also the program will run at once
/*
int i = 1;
do
{
    cout<<i<<endl;
    i++;
   
}while (false);
*/

}


