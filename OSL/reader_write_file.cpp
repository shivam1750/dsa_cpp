#include<iostream>
using namespace std;
#include<iomanip>
writer(){
    while(TRUE) {
        wait(w);   
   /* perform the write operation */  
    signal(w);
}
reader(){   
    while(TRUE) {
    //acquire lock
        wait(m);
        read_count++;
        if(read_count == 1)
            wait(w);
    //release lock  
        signal(m);  
    /* perform the reading operation */
    // acquire lock
        wait(m);   
        read_count--;
        if(read_count == 0)
            signal(w);  
    // release lock
        signal(m);  
} }

int main(){
    writer();
    reader();
    return 0 ;
}