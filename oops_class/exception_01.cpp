// #include<iostream>
// using namespace std;
// #include<iomanip>
// float division(int x,int y){
//     return(x/y);
// }
// int main(){
//     int x,y;
//     x=50;
//     y=0;
//     int z=0;
//     division(x,y);
//     cout<<z<<endl;
//     return 0 ;
// }


//by using try catch throw to handle exception handling

#include<iostream>
using namespace std;
#include<iomanip>
float division(int x,int y){
    if(y==0){
        throw "attempted to divide by zeros !!";
    }
    return(x/y);
}
int main(){
    int i=25,j=0;
    float k = 0;
    try
    {
        k=division(i,j);
        cout<<k<<endl;
    }
    catch(const char * e)
    {
        cerr << e << '\n';
    }
    
    return 0 ;
}

//NOTE :    when we using exception handling        ======>> use for runtime error
//in try always use function call and throw statement 
//and in catch = the syntex is just like (constant char * )