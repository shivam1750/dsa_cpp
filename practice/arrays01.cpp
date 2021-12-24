#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    //collection of items of similar type stored in contiguous memory location

    //example 01
    int mark[] = {22,54,1854,15};
    
    cout<<mark[0]<<endl;
    cout<<mark[1]<<endl;
    cout<<mark[2]<<endl;
    cout<<mark[3]<<endl;
    cout<<(mark[0]+mark[1]);
    cout<<"  "<<endl;
    
    //example 02
    int markdone[4] ;
    markdone[0] = 9890;
    markdone[1] = 548;
    markdone[2] = 964;
    markdone[3] = 354;

    cout<<markdone[0]<<endl;
    cout<<markdone[1]<<endl;
    markdone[2]= 75 ;            // -----> change value in arrays
    cout<<markdone[2]<<endl;
    cout<<markdone[3]<<endl;
    
    return 0 ;
}