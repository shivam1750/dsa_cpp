#include <iostream>  
#include<list>  
using namespace std;  
  
int main()  
{  
   list<int> li={1,2,3,4,5};  
   list<int> li1={6,7,8,9};  
   list<int>::iterator itr=li.begin();  
   li.insert(itr,li1.begin(),li1.end());  
   for(itr=li.begin();itr!=li.end();++itr)  
{  
   cout<<*itr;  
   cout<<"  \t  ";  
              }                      
            return 0;  
}  
