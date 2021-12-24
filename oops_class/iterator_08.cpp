#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int>g1;
    for (int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }
    cout<<" output of begin and end : "<<endl;
    for (auto i =g1.begin() ; i!= g1.end(); ++i)
    {
        cout<<*i<<"  ";
    }
    cout<<"\nsize : "<<g1.size()<<endl;
    cout<<"capacity : "<<g1.capacity()<<endl;
    cout<<"max size : "<<g1.max_size()<<endl;

    //resize the vector size to 4 
    g1.resize(4);

    cout<<"\nnew size : "<<g1.size()<<endl;
    //too check the vector is empty or not 
    if(g1.empty()==false){
        cout<<"vector is not empty "<<endl;
    }
    else
    {
        cout<<"vector is empty "<<endl;
    }
    // shrinks the vector {shrinks == reduces the capacity of contaniner to ift size and destroys all element beyond the capacity} 
    g1.shrink_to_fit();
    for (auto it = g1.begin(); it != g1.end(); it++)
    {
        cout<<*it<<"  ";
    }
    
    cout<<"\nsize : "<<g1.size()<<endl;
    cout<<"capacity : "<<g1.capacity()<<endl;
    cout<<"max size : "<<g1.max_size()<<endl;
    return 0;
}