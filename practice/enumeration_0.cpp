#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    enum shape{circle,triangle,square};
    cout<<circle<<" "<<triangle<<" "<<square;

    cout<<"\n";
    
    enum big{polygon=10,tri_01,squ_01};
    cout<<polygon<<" "<<tri_01<<" "<<squ_01;
    return 0 ;
}