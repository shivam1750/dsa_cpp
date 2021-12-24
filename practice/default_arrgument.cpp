#include<iostream>
using namespace std;
#include<iomanip>

// DEFAULT ARRG -->> it is use when the one arrugment is constant
// NOTE : always default arrg cinsist in last , compusary arrg is extremly left
float money_received(float a, float b = 1.04){
    return a*b;
}


// NOTES : -- CONSTANT ARRGUMENT :--
/*
int string(const char * p)
{

}
*/
int main(){
    float a;
    //a = 100000;
    cin>>a;
    cout<<"you have : "<<a<< endl<<" after complete the 1 yr you got : "<<money_received(a)<<endl;
    cout<<"If you are VIP ,you have : "<<a<< endl<<"after complete the 1 yr you got : "<<money_received(a,1.1)<<endl;
    return 0 ;
}


