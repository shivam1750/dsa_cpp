#include<iostream>
#include<iomanip>
using namespace std;
int main(){

    //operator precedance ---->which operator have more prayority
    int a= 3 , b =4;
    int c = (((a+b)-b)-45)+87;

    cout<<c;
    return 0;
 

}