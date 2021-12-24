#include<iostream>
using namespace std;
#include<iomanip>
/*
int main(){
    enum monu{good , hushar , topper};

    cout<<good<<endl;
    cout<<hushar<<endl;
    cout<<topper<<endl;

    return 0 ;
}
*/

int main(){
    enum monu{good , hushar , topper};
    monu  b = good;
    cout<<(b == 1) <<endl;
    cout<<(b == 2)<<endl;
    cout<<topper<<endl;

    return 0 ;
}
