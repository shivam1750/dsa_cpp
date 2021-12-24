#include<iostream>
using namespace std;
#include<iomanip>
/*
int main(){
    int num1=10;
    int num2=20;
    //cout<<"num1 is : "<<endl;
    //cin>>num1;

    //cout<<"num2 is : "<<endl;
    //cin>>num2;

    cout<<"sum  is : "<<(num1+num2);
    return 0 ;
}
*/
int main(){
    int num1,num2;
    cout<<"num1 is : "<<endl;
    cin>>num1;

    cout<<"num2 is : "<<endl;
    cin>>num2;

    cout<<"sum  is : "<<(num1+num2)<<endl;
    cout<<"product is : "<<(num1*num2)<<endl;

    int average = ((num1+num2)/2);
    cout<<"average is : "<<(num1+num2)<<endl;

    int num , factoraial=1;
    cout<<"enter the no.: ";
    cin>>num;

    for (int i = 1; i <= num; i++)
    {
        factoraial=factoraial*i;
    }
    cout<<"factorial is: "<<factoraial;
    return 0 ;

}