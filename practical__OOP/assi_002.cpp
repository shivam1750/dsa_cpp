/*Develop an object oriented program in C++ to create a database of student information system containing 
the following information: Name, Roll number, Class, division, Date of Birth, Blood group, Contact address,
telephone number, driving license no. etc Construct the database with suitable member functions for initializing 
and destroying the data viz constructor, default constructor, Copy constructor, destructor, static member 
functions, friend class, this pointer, inline code and dynamic memory allocation operators-new and delete
*/

 #include <iostream>

using namespace std;
class student
{
    public :
    int rollno,class_,telephone_number,driving_license_no;
    char name[20],division[2], date_birth[20],blood_group[10],contact_adress[20]; 
            void getdata()
            {
                cout << "Enter rollno ";
                cin>>rollno;
                cout << "Enter name ";
                cin>>name;
                cout<<"Enter your class ";
                cin>>class_;
                cout<<"Enter your division ";
                cin>>division;
                cout<<"Enter your date of birth ";
                cin>>date_birth;
                cout<<"Enter your blood group ";
                cin>>blood_group;
                cout<<"Enter your contact adress  ";
                cin>>contact_adress;
                cout<<"Enter your telephone number  ";
                cin>>telephone_number;
                cout<<"Enter your driving_license_no  ";
                cin>>driving_license_no;

            }
            void putdata()
            {
                cout << "\nRollno  ";
                cout<<rollno;
                cout << "\nName  ";
                cout<<name;
                cout << "\nclass  ";
                cout<<class_;
                cout << "\ndivision  ";
                cout<<division;
                cout << "\ndate of birth  ";
                cout<<date_birth;
                cout << "\nblood group  ";
                cout<<blood_group;
                cout << "\n contact adress ";
                cout<<contact_adress;
                cout << "\n telephone number ";
                cout<<telephone_number;
                cout << "\n driving_license_no ";
                cout<<driving_license_no;
            }
};
int main()
{
  student s1, *sp;
  
  sp=&s1;
  
  s1.getdata();
  sp->putdata();
   return 0;
}