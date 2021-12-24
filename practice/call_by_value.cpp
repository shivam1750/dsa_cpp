#include<iostream>
using namespace std;
#include<iomanip>
void call_(int &a ){  //& == refereance value  ,  
// call by value : only variable can be acces by the function <<or>> variable value is not change
// call by refereacne :  variable value is  change
    a = a*a;
    cout<< a;
}
int main(){
    
    int a;
    cout<<"enter the number : "<<endl;
    cin>>a;
    call_(a);
    cout<<a;
    return 0 ;
}