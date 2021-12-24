#include<iostream>  
#include<vector>  
#include<algorithm>  
using namespace std;  
int main()  
{  
    int m, n;  
    vector <int> u1={1,2,3,4,5,6,7};  
    vector <int> u2={3,4,5};  
    vector<int>::iterator ti;  
    ti = std::search(u1.begin(), u1.end(),  u2.begin(),u2.end());  
    if(ti!=u1.end())  
    {  
        cout<<"Vector2 is present at index:"<<(ti-u1.begin());  
    }  
    else  
    {  
        cout<<"In vector1, vector2 is not present";  
    }  
    return 0;  
}  