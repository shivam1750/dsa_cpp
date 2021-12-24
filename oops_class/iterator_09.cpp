#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
    vector <int> g1;
    for (int i = 1; i <= 10 ; i++){
       g1.push_back(i*10);
    }
    for (auto i =g1.begin() ; i!= g1.end(); ++i){
        cout<<*i<<"  ";
    }
    cout<<"\n reference operator [g] : g1[2] = "<<g1[2]; //return reference element at position 'g' in the vector
    cout<<"\n at : g1.at(4) = "<<g1.at(4);//return reference element at position 'g' in the vector 
    cout<<"\n front() : g1.front() = "<<g1.front();//return reference to first element in the vector 
    cout<<"\n back() : g1.back() = "<<g1.back();//return reference to last element in the vector 
    int *pos = g1.data();
    int z= *pos;
    cout<<endl;
    cout<<"first element is : "<<&z<<endl;
    return 0 ; 
}