//01
// #include<iostream>
// using namespace std;
// #include<iomanip>
// int main(){
//     try{
//         int age;
//         cout<<"enter the age : "<<endl;
//         cin>>age;
//         if(age>=18){
//             cout<<"read for vaccination !!!!";
//         }
//         else{
//             throw(age);
//         }
//             }
//     catch(int x){
//         cout<<"you are not read for vaccination ";
//     }
//     return 0 ;
// }

//02
#include<iostream>
using namespace std;
#include<iomanip>
void eligible(int a){
    if(a<=18){
        throw"not eligible for vaccine ";
    }
    cout<<"you are eligible for vaccine ";
}
int main(){
    int age;
    try
    {
        cout<<"enter age : ";
        cin>>age;
        eligible(age);
    }
    catch(char const* a)
    {
        cout<<a<<endl;
    }
    
    return 0 ;
}