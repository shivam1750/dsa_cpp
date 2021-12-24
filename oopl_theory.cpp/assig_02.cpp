/* 02) Make a class named Fruit with a data member to calculate the number of fruits in a
basket. Create two other class named Apples and Mangoes to calculate the number of
apples and mangoes in the basket. Print the number of fruits of each type and the total
number of fruits in the basket.*/
#include<iostream>
using namespace std;
#include<iomanip>

class apples{
    public:
    int number_apples;   
    void apples_(){
        cout<<"enter the number of apples in baket : "<<endl;
        cin>>number_apples;
    }
    
};
class mangoes{
    public:
    int number_mangoes;
    void mangoes_(){
        cout<<"enter the number of mangoes in baket : "<<endl;
        cin>>number_mangoes;
    }
};
class fruit : public apples , public mangoes {
    public :
    int print_typr, total_fruits;
    void display(){
        cout<<"Numbers of apples : "<<number_apples<<endl;
        cout<<"Number of mangoes : "<<number_mangoes<<endl;
    }
    void calculation(){
        cout<<"Total number of fruit in the basket is : "<<(number_mangoes+number_apples)<<endl;
    }
};
int main(){
    fruit x;
    x.apples_();
    x.mangoes_();
    x.display();
    x.calculation();
    return 0 ;
}