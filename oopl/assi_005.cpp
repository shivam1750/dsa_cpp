/*              // QUESTION 5 //
        Write a function template for selection sort that inputs, 
        sorts and outputs an integer array and a float array. */
#include<iostream>
using namespace std;
#include<iomanip>
int n;
template<class o>
void sort(o A[10])
{
    int i,j,min;
    o temp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(A[j]<A[min]){
                min=j;}
        }
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
    cout<<" Sorted array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" | "<<A[i];
    }
    cout<<" |";
}

int main(){
    int A[10];
    float B[10];
    int i;
    
    cout<<"*** sorting **********"<<endl;
    cout<<" menu \n"<<" 1 . int value \n"<<"2 . float value \n"<<"3 . exit \n";
    int choice;
    cin>>choice ;
    switch (choice)
    {
    case 1:
        cout<<"Enter total no of int elements: "<<endl ;
        cin>>n;
        cout<<"Enter int elements: "<<endl;
        for(i=0;i<n;i++)
        {
            cin>>A[i];
        }
        sort(A);
        break;
    case 2:
        cout<<"Enter total no of float elements: "<<endl;
        cin>>n;
        cout<<"Enter float elements: "<<endl;
        for(i=0;i<n;i++)
        {
            cin>>B[i];
        }
        sort(B);
    case 3:
        break;
    default:
        cout<<" invalid input !!!!!!!! "<<endl;
        break;
    }
}