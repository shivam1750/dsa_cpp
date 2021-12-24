#include<iostream>
using namespace std;
#include<iomanip>
struct Employe
{
    /* data */
    int eId;
    char favchar;
    float salery;
};

int main(){
    struct Empolye om_shinde;
   om_shinde.eID=1;
   om_shinde.favchar="c";
   om_shinde.salery=1200;
   cout<<"salary is : " <<om_shinde.salery;
    return 0 ;
}