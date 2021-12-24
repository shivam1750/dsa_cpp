#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    //pointer and arrays 
    int marks[] = {22,54,1854,15};

    int *p = marks;

    cout<<"the value of the marks[0] "<<*p<<endl;
    cout<<"the value of the marks[1] "<<*(p+1)<<endl;
    cout<<"the value of the marks[2] "<<*(p+2)<<endl;
    cout<<"the value of the marks[3] "<<*(p+3)<<endl;  // ----> this give the derefereance operator

    //cout<<"the value of the marks[3] "<<(&p+3)<<endl;  ---> this give the address operator

    return 0 ;
}