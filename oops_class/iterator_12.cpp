// algorithm, in secondary sort by using veciotr 
#include <iostream>  
#include <vector>  
#include <algorithm>    
using namespace std;    
int main()  {    
    vector<int> v = {3, 1, 4, 2, 5};          
    cout<<"Before sorting: ";      
    for_each(v.begin(), v.end(), [](int x) {      
        cout << x << " ";    });      
    sort(v.begin(), v.end());        
    cout<<"\nAfter sorting:  ";    
    for_each(v.begin(), v.end(), [](int x) {      
        cout << x << " ";   
    });        
        
    return 0; 
}  