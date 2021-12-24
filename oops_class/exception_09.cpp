//exception handel in base and derived class
#include<iostream>
using namespace std;
#include<iomanip>
class base{

};
class derived: public base{

};
int main(){
    derived b;
    //some other stuff
    try
    {
        //some monitored code
        throw b;
    }
    catch()
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0 ;
}