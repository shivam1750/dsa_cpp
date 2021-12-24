#include<iomanip>
#include<iostream>
using namespace std; 

int main(){
/*
    their are 3 loops in cpp language 
    1) for loops
    2) while loops
    3) do while loops
*/
// ------  For loops ----

/* syntex for for loops

for (initialization ; condition ; updation)
{

    loops body(code for c++ );
    
}
*/

for( int i = 1 ; (i<=100) ; i++){
    cout<<setw(2)<<i << endl;
}
return 0 ;
}
