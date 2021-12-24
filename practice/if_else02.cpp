#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int age;

    cout<<"enter your age : "<<endl;
    cin>>age; 

    switch (age)
    {
    case 18 :
        cout<<"you are 18"<<endl;
        break;  // if their is no break then all case are printed

    case 22 :
        cout<<"you are 18"<<endl;
        break;  // if their is no break then all case are printed
    
    default:
        cout<<"no other special case "<<endl;
        break;
    }

    cout<<"done"<<endl;
    return 0;
}
