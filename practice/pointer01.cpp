/*#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int x,*y;
    cout<<"enter the x no : "<<endl;
    cin>>x;

    y=&x;
    cout<<"address of y : "<<y<<endl;
    cout<<"value of y is : "<<*y<<endl;
    return 0 ;
}*/
/*
#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int x[5],*y,i;
    y=x;
    cout<<"enter the x no : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>x[i];
    }
    cout<<"the value of array is : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<*y+i<<endl;
    }
    
    return 0 ;
}
*/
/*
#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int x[5],*y,i;
    y=x;
    cout<<"enter the x no : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>x[i];
    }
    cout<<"the value of array is : "<<endl;
    for (int i = 0; i < 5; i++)
    {
        //cout<<*y+i<<endl;
        cout<<*y++<<endl;
    }
    return 0 ;
}
*/
#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    int x = 10 ,*y;
    y = &x;
    cout<<y<<endl;
    cout<<*y<<endl;
    cout<<"              "<<endl;
    cout<<y++<<endl;
    cout<<y<<endl;
    cout<<y++<<endl;
    return 0 ;
} //19 20 22 