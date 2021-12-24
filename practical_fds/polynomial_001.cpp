#include<iostream>
using namespace std;
#include<iomanip>
struct polynimial
{
    float coef,expo;
};
polynimial  p1[10], p2[10], p3[10];
int t1,t2,t3,a,b;
void inputPoly(){
    cout<<"eneter the number of terms in 1st polynomial: ";
    cin >> t1;
    a = t1-1;
    cout<<"enter the number of turms in 2nd polynomial: ";
    cin >> t2;
    b = t2-1;
    for (int i=0; i<t1; i++){
        cout<<"enter the "<<t1-i-1<<" coefficient of 1st polynomial: ";
        cin>>p1[i].coef;
        cout<<"enter the "<<t1-i-1<<" exponent of 1st polynomial: ";
        cin>>p1[i].expo;
    }
    for (int i=0; i<t2; i++){
        cout<<"enter the "<<t2-i-1<<" coefficient of 2nd polynomial: ";
        cin>>p2[i].coef;
        cout<<"enter the "<<t2-i-1<<"  exponent of  2nd polynomial: ";
        cin>>p2[i].expo;
    }
}
void showPoly(){
     for (int i=0; i<t1-1; i++){
         cout<<p1[i].coef<<"x^"<<p1[i].expo<<"+";
     }
     cout<<p1[a].coef<<"x^"<<p1[a].expo<<endl;

     for (int i=0; i<t2-1; i++){
         cout<<p2[i].coef<<"x^"<<p2[i].expo<<"+";
     }
     cout<<p2[b].coef<<"x^"<<p2[b].expo<<endl;
}
int main()
{
    inputPoly();
    showPoly();
return 0;
}
