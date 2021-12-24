#include <iostream>
using namespace std;

struct node
{
    int prn;
    char name[10];
    node *link;
};

node *head = nullptr;
void new_Node(int n){
    node *ptr = new node();
    node *curt;
    ptr->link = nullptr;
    cout << "Enter PRN: ";
    cin >> ptr->prn;
    cout << "ENter name: ";
    cin >> ptr->name;
    cout<<endl;

    if (head == nullptr){
        head = ptr;
        curt = ptr;
    }
    else{
        curt->link = ptr;
        curt = ptr;
    }
}

void display(){
    node *ptr;
    if(head == nullptr){
        cout<<"list is empty!!";
    }
    else{
        ptr = head;
        while (ptr != nullptr){
            cout<<ptr->prn<<" "<<ptr->name<<" -> ";
            ptr = ptr ->link;
        }
        cout <<"NULL";
    }
}

int main()
{
    int n;
    cout << "Enter the number of members: ";
    cin >> n;
    for(int i=0; i<n; i++){
        new_Node(n);
    }
    display();

    return 0;
}