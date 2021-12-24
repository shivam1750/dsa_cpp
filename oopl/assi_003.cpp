/*                             // QUESTION 3 //
Imagine a publishing company that markets both book and audiocassette versions of its works. Create
a class publication that stores the title (a string) and price (type float) of a publication. From this class
derive two classes: book, which adds a page count (type int), and tape, which adds a playing time in
minutes (type float). Each of these three classes should have a getdata() function to get its data from the
user at the keyboard, and a putdata() function to display its data. Write a main() program to test the
book and tape classes by creating instances of them, asking the user to fill in data with getdata(), and
then displaying the data with putdata().
*/

#include<iostream>
using namespace std;
#include<iomanip>

class publication 
{
    protected:
    char title[100];
    float price;
    public:
    void getdata()
    {
        cout<<"Enter the Title of Publication\n";
        cin>>title;
        cout<<"Enter the price\n";
        cin>>price;
    }
    void putdata()
    {
        cout<<"\nTitle: "<<title<<endl;
        cout<<"Price: $"<<price<<endl;
    }
};
class tape: public publication 
{
    public:
    float play_time;
    
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the play time in minutes.\t[xx.xx]\n";
        cin>>play_time;
        cout<<endl;
    }
    void putdata()
    {
        publication::putdata();
        try
        {
            if(play_time<0){
                throw play_time;
            }
            else{
                cout<<"Play time \t[0.0]: "<<play_time<<endl;
            }
        }
        catch(...)
        {
            cout<<"caught an exception "<<endl;
            play_time = 0;
            cout<<"title: 0 \nprice : 0 \npage time :0 "<<endl;
            cout<<endl;
        }
    }
};
class book: public publication
{
    private:
    int page_count;
    public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter the no.of Pages that the book contains\n";
        cin>>page_count;
    }
    void putdata()
{
    publication::putdata();
    try
        {
            if(page_count<0){
                throw page_count;
            }
            else{
                cout<<"page count is : "<<page_count<<endl;
            }
        }
        catch(...)
        {
            cout<<"caught an exception "<<endl;
            page_count = 0;
            cout<<"title: 0 \nprice : 0 \npage count :0 "<<endl;
            cout<<endl;
        }
}
};
int main()
{
    book playbook;
    tape playtape;
    char choice;

    cout << "\nBOOK\n";
    playbook.book::getdata();
    getchar();
    cout << "\nTAPE\n";
    playtape.tape::getdata();

    cout << "\n\n MENU\n";
    cout << "1 - Book\n";
    cout << "2 - Tape\n";
    getchar(); 
    choice = getchar();
    switch(choice){
        case '1':{ 
            playbook.book::putdata();
            break;
        }
        case '2':{ 
            playtape.tape::putdata();
            break;
        }
    }
  return 0;
}