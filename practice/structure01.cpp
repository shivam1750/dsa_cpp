#include<iostream>
using namespace std;
#include<iomanip>

//  ----- union ----

union money
{
    /* data */
    int rupees;  // 4
    char pound;  // 1
    float dollar; //4  =======> their is only one memory bits will be use 
    //                                 and other two will be unused   

};

int main(){
    union money S1;
    //S1.rupees = 98;
    //S1.pound = 'p';  
    S1.dollar = 89.15;

    //cout<< S1.rupees;
    //cout<< S1.pound; 
    cout<< S1.dollar;         // -- note that we can access only one value at one time

    return 0 ;
}