// #include <iostream>  
// #include<list>  
// using namespace std;  
// int main()  
// {  
//    list<int> li={1,2,3,4};  
//    list<int> li1={5,6,7,8};  
//    li.merge(li1);  
//    for(list<int>::iterator itr=li.begin();itr!=li.end();++itr)  
//    std::cout << *itr<<? ?;  
//     return 0;  
// }  

#include <iostream>  
#include<list>  
using namespace std;  
bool comparison(int first, int second)  
{  
    bool a;  
    a=first<second;  
    return (a);  
}  
int main()  
{  
  list<int> li={9,10,11};  
  list<int> li1={5,6,7,15};  
  li.merge(li1,comparison);  
  for(list<int>::iterator itr=li.begin();itr!=li.end();++itr)  
  std::cout << *itr 
<<" "<< std::endl;  
  return 0;  
}  
