#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int your_age;

    cout<<"enter your age"<<endl;
    cin>> your_age;

    if((your_age<18) && (your_age>0))
     {
        cout<<"you are not applicable for voting "<<endl;
    }

    /*
if(your_age<18){
        cout<<"you are not applicable for voting "<<endl;
    }
*/
    else if (your_age==18)
    {
        cout<<"you are applicable for the voting"<<endl;
    }
    
    else if (your_age<1)
    {
        cout<<"you are very samll boy";
    }
    
    else{
        cout<<"you are alrady a applicable for voting "<<endl;
    }

    return 0;
}