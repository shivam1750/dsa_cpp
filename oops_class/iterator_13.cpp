#include <iostream>     // std::cout  
#include <algorithm>    // std::minmax  
  
using namespace std;  
  
int main () {  
  auto result = minmax({1,2,3,4,5});  
  
  cout << "minmax({1,2,3,4,5}): ";  
  cout << result.first << ' ' << result.second << '\n';
  return 0;    
}  