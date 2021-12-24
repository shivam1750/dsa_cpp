// #include <iostream>  
// #include<list>  
// using namespace std;  
// int main()  
// {  
//    list<int> li={6,7,8,9};  
//    list<int>::iterator itr;  
//    li.pop_back();  
//    li.pop_back();  
//   for(itr=li.begin();itr!=li.end();++itr)  
//   cout<<*itr<<",";  
//   return 0;  
// }  

	#include <iostream>  
	#include<list>  
	using namespace std;  
	int main()  
	{  
	     list<int> li={20,30,40,50};  
	    li.pop_front();  
	    list<int>::iterator itr;  
	    for(itr=li.begin();itr!=li.end();++itr)  
	    cout<<*itr<<",";  
	    return 0;  
	}  
