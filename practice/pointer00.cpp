#include<iostream>
using namespace std;
#include<iomanip>

int main(){

    int a = 3;
    int *b = &a;
    
 //  & -->>(Adderess of)operator 
    cout<<b<<endl;
    cout<< &a<<endl;

    //  * -->> derefereance operator // pointer 
    cout<<*b<<endl;

    //pointer too pointer 
    int **c = &b;

    //adress 
    cout<<&b<<endl;
    cout<<c<<endl;
    //derefereance 
    cout <<*c<<endl;
    cout <<**c<<endl;
    
    return 0 ;
}