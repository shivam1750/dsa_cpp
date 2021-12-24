//wirte a function tamplate o find the minimum value of object 
#include<iostream>
using namespace std;
#include<iomanip>
template<class x>void func(x b){
    int arr_[20];
    cout<<"*** enter the element ****"<<endl;
    for(int i=0 ; i<b; i++){
        cin>>arr_[i];
    }
    int min=arr_[0];
    for (int i = 0; i < b; i++)
    {
        if(arr_[i]<min){
            min=arr_[i];
        }
    }
    cout<<"minimum element is : "<<min<<endl;
}
int main(){
    int a;
    cout<<"enter the total number of element in array : "<<endl;
    cin>>a ;
    func(a);
    return 0 ;
}