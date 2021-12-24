/*
//  *******   Pass By value **********
#include<iostream>
using namespace std;
#include<iomanip>
void cube(int x){
    x=x*x*x;
}
int main(){
    int y =10;
    cout<<"before : "<<y<<endl;
    cube(y);
    cout<<"after : "<<y<<endl;
    return 0 ;
}
*/

// ******** Pass By reference ***********
#include<iostream>
using namespace std;
#include<iomanip>
void cube(int &x){
    x=x*x*x;
}
int main(){
    int y =10;
    cout<<"before : "<<y<<endl;
    cube(y);
    cout<<"after : "<<y<<endl;
    return 0 ;
}


// ********* Pass By pointer_01 *********
/*
#include<iostream>
using namespace std;
#include<iomanip>

void cube(int *x){
    *x=(*x)*(*x)*(*x);
}
int main(){
    int y =10;
    cout<<"before : "<<y<<endl;
    cube(&y);
    cout<<"after : "<<y<<endl;
    return 0 ;
}
*/
/*
// ********* Pass By pointer_02 ( using swaping ) *********
#include<iostream>
using namespace std;
#include<iomanip>
void swap(int *m , int *n){
    int temp = *m;
    *m=*n;
    *n=temp;
}
int main(){ 
    int a, b ;
    cout<<"enter the value os a and b : "<<endl;
    cin>>a>>b;

    cout<<"before value of swaping using pointer is a = "<<a<<" and b = "<<b<<endl;
    swap(&a,&b);

    cout<<"after value of swaping using pointer is a = "<<a<<" and b = "<<b<<endl;
    
    return 0 ;
}
*/
