#include<iostream>
using namespace std;
#include<iomanip>

int sum(int a , int b)
{
    int c = (a + b);
    return c;
}
/*
void swap(int a , int b){  // temp  a  b             // not swap 
    int temp = a;          // 4     4  5               //  because they print acutual argument
    a = b;                 // 4     5  5
    b = temp ;             // 4     5  4

}  */ 

/*
// call by refereance by pointer
void swap(int *a , int *b){  // p  a  b 
    int temp = *a;          // 4     4  5
    *a = *b;                 // 4     5  5
    *b = temp ;             // 4     5  4

}
*/

//  call by refereance by cpp refereance variable
void swap(int a , int b,int temp){  // temp  a  b 
    temp = a;          // 4     4  5
    a = b;                 // 4     5  5
    b = temp ;             // 4     5  4

}
/*
int main(){
    int x = 4 , y = 5 ;
    //cout <<" the sum of 4,5 is : "<<sum(a,b);
    cout<< " the value of x : "<<x<<" the value of y : "<<y<<endl;
    //swap(x , y);    // 01 
    // swap(&x, &y);  // 02   call by refereance by pointer
    swap(x,y);        // 03   call by refereance by cpp refereance variable
    cout<< " the value of x : "<<x<<" the value of y : "<<y<<endl;
    return 0 ;
}*/

int main(){
    int x  , y  ;
    cin>>x>>y;
    cout<< " the value of x : "<<x<<" the value of y : "<<y<<endl;
    swap(x,y);        // 03   call by refereance by cpp refereance variable
    cout<< " the value of x : "<<x<<" the value of y : "<<y<<endl;
    return 0 ;
}