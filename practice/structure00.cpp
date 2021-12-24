#include<iostream>
using namespace std;
#include<iomanip>

// structure ...01   

struct shivam
{
    /* data */
    int id; // 4 bits 
    char favchar; // 1 bits 
    float salary; // 4 bits    ========> they use total 9 bits at a time 

};

int main(){
    
    struct shivam boss;
    boss.id = 12;
    boss.favchar = 'b' ; 
    boss.salary = 451212.65 ; 
    cout<< " the user id is "<<boss.id<<endl;
    cout<< " the user id is "<<boss.favchar<<endl;
    cout<< " the user id is "<<boss.salary<<endl;

    return 0 ;
}



/*
typedef struct shivam
{
   
    int id;
    char favchar;
    float salary;

}ss;     // ss = struct shivam 

int main(){
    ss employ;
    ss leader; 
    ss boss;
    boss.id = 12;
    boss.favchar = 'b' ; 
    boss.salary = 451212.65 ; 
    cout<< " the user id is "<<boss.id<<endl;
    cout<< " the user id is "<<boss.favchar<<endl;
    cout<< " the user id is "<<boss.salary<<endl;

    return 0 ;
}

*/