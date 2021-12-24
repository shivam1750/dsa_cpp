//job queue
#include<iostream>
using namespace std;

class job			//class declaration
{
    int num;		//store serial no. of job
    job *next;		//points toward next node of job
public:
    job(){
        next = NULL;
    }
    void setnum(int x){
        num = x;
    }
    void setnext(job *y){
        next = y;
    }
    int getnum(){
        return num;
    }
    job* getnext(){
        return next;
    }
};

class order
{
    job *front,*rear,*temp1;	//1temp1 is taken for verification of data inside queue 
    public : 
    order(){
        front = NULL;
        rear = NULL;
		temp1=NULL;
    }
    void create();
    void add();
    void del();
    void display();
};

void order::create()		//It creates the initial queue
{
    char ans;
    do{
        int n;
        cout<<"\nEnter the job number: ";
        cin>>n;
        job *nn;
        nn = new job();
        nn->setnum(n);
        if(front == NULL){
			front = nn;
            rear = nn;
            cout<<"\nfront job inserted";
        }
        else{
            rear->setnext(nn);
            rear=rear->getnext();
            cout<<"\njob inserted";
        }
        cout<<"\nDo you want to add another job, press Y/y :";
        cin>>ans;
    }while(ans == 'y' || ans == 'Y');
}

void order::add()		//Add job in queue from Rear
{
    int n;
    job *nn;
    nn = new job();
    cout<<"\nEnter the job number: ";
    cin>>n;
    nn->setnum(n);
    if(front == NULL){
         rear = nn;
    }
    else{
        rear->setnext(nn);
        rear=rear->getnext();
    }
    cout<<"\nJob Added Successfully\n";
}

void order::del()		//Remove job from queue from Front
{
    if(front == NULL){
        cout<<"\nJob Queue is Empty\n";
    }
    else{
        job *temp;
        temp = front->getnext();
        delete(front);
        front = temp;
    }
    cout<<"\nfront Job Removed Successfully\n";
}

void order::display()		//for verification(logically can't be performed) of data available inside queue
{
    cout<<"\nJob Queue :\n";

        temp1 = front;
        cout<<temp1->getnum()<<" ";
        while(temp1->getnext()!= NULL){
            temp1 = temp1->getnext();
            cout<<temp1->getnum()<<" ";
        }
        cout<<endl;
}

int main()			//main function
{
    char ans;
    order l;
    do
    {
        int choice;
        cout<<"\nChoice List: \n";			//choice list
        cout<<"\n\t1.Create Job Queue\n"<<"\n\t2.Insert Job in Job Queue\n"<<"\n\t3.Remove front Job from Job Queue\n"<<"\n\t4.Display Job Queue\n";
        cout<<"\nEnter Choice : ";
        cin>>choice;
        cout<<endl;

        switch(choice){
        case 1:
            l.create();
            break;
        case 2:
            l.add();
            break;
        case 3:
            l.del();
            break;
        case 4:
            l.display();
            break;
        default:
            cout<<"\n\tInvalid option Selected, Please try Again\n";
            break;
    }
    cout<<"\nTo continue with this Queue operations, Press Y/y: ";
    cin>>ans;
    cout<<endl;
    }while(ans == 'y' || ans == 'Y');
return 0;
}

