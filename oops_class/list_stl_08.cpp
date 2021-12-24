#include <iostream>  
#include<list>  
using namespace std;  
int main()  
{  
   std::list<int> li={1,2,3,4,5,6};  
    cout<<"content of list li is :";  
    for(list<int> :: iterator itr=li.begin();itr!=li.end();++itr)  
    cout<<*itr;  
    li.reverse();  
    cout<<'\n';  
    cout<<"After reversing, content of list li is :";  
    for(list<int> :: iterator itr=li.begin();itr!=li.end();++itr)  
    cout<<*itr;  
  
    cout<<'\n';  
    return 0;  
}  

