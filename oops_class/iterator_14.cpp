#include <iostream>  
#include <set>  
#include <list>  
#include <vector>  
#include <algorithm>  
#include <iterator>  
  
using namespace std;  
  
int main()  
{  
  list<int> a = {0, 2, 3, 4, 6, 7};  
  multiset<int> b = {2, 3, 4};  
  vector<int> result;  
  
  set_difference(begin(a), end(a),  
                 begin(b), end(b),  
                 inserter(result, end(result)));  
  
  for_each(begin(result), end(result), [](int x) {  
    cout << x << endl;  
  });  
    
  return 0;  
} 