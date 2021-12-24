#include <iostream>  
#include <vector>  
#include <algorithm>  
#include<iterator>
#include<mutex>
using namespace std;  
   
int main()  
{   
  int a[] = {11, 22, 36, 17, 3, 25, 1, 2, 7};  
  vector<int> v(a, a+9);  
   
  cout <<"\nHere are the values in the heap:\n";  
  for (vector<int>::size_type i=0; i<v.size(); i++)  
    cout <<v.at(i)<<" ";  
   
  cout <<"\nNow we sort these values into ascending order.";  
  sort_heap(v.begin(), v.end());  
   
  cout <<"\nHere is the result:\n";  
  for (vector<int>::size_type i=0; i<v.size(); i++)  
    cout <<v.at(i)<<" ";  

  cout<<"enter the number : "<<endl;
  int x;
  cin>>x;
  for (int i = 0; i < x; i++)
  {
    cin>>a[i];
  }
  

return 0;  
}  