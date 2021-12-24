// file pointer position //seekg //seekp // tellp //tellg
#include<iostream>
using namespace std;
#include<iomanip>
#include<fstream>
int main(){
    fstream st;

    //write 
    st.open("shivam.txt",ios::out);
    if(!st){
        cout<<"file creating failed "<<endl;
    }
    else
    {
        cout<<"New file created "<<endl;
        st<<" WELLCOME TO THE AI&DS DEPARTMENT "<<endl; // writing a file 

        cout<<endl;

        cout<<"File pointer position is : "<<st.tellp()<<endl; // tellp = write file pointer postion 
        st.seekp(-1 , ios::cur);//  go one position back to current position 

        cout<<"As per tellp File pointer position is : "<<st.tellp()<<endl;

        st.close();

    }

    //read 
    st.open("shivam.txt",ios::in);//opening file in read mode 
    if(!st){
        cout<<"No such file "<<endl;
    }
    else
    {
        char ch;
        st.seekg(5,ios::beg);//go to postion 5 from begning
        cout<<endl;

        //checking a position of pointer 
        cout<<"As per tellg File pointer position is : "<<st.tellg()<<endl; //tellg =read file pointer postion 

        st.seekg(1,ios::beg);//go to postion 1 from begning
        cout<<"As per tellg File pointer position is : "<<st.tellg()<<endl; //tellg =read file pointer postion 
        st.close();
    }
    
    return 0 ;
}