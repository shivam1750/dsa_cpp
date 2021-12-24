#include <iostream>  
#include<list>  
using namespace std;  
int main()  
{  
   list<string> li={"C is a language"};  
   list<string>::iterator itr=li.begin();  
   li.insert(itr,2,"java ");  
   for(itr=li.begin();itr!=li.end();++itr)  
   cout<<*itr;  
    return 0;  
}  
