/*                              // QUESTION 4 //
    write a c++ program that create an output file , write a information to it , closes the file, open it
    again as an input file and read the information from the file . 
*/

//group B - 04
//C++ FileStream example: writing to a file
#include <iostream>  
#include <fstream>  
using namespace std;  
int main () {  
  ofstream filestream("testout.txt");  //filestream is object or file name is also change //writing 
  //filestream.close()          -------> output = file opening is fail
  if (filestream.is_open())  
  {  
    char x[20];
    cout<<"enter : ";
    cin>>x;
    filestream << "Welcome to DYPIEMR.\n"<<x;  
    filestream << "\nC++ Tutorial.\n";  
    filestream.close();  
  }  
  else cout <<"File opening is fail.";  
  return 0;  
}  

// //C++ FileStream example: reading from a file
// #include <iostream>  
// #include <fstream>  
// using namespace std;  
// int main () {  
//   string srg;  
//   ifstream filestream("testout.txt");  //reading 
//   if (filestream.is_open())  
//   {  
//     while ( getline (filestream,srg) )  
//     {  
//       cout << srg <<endl;  
//     }  
//     filestream.close();  
//   }  
//   else {  
//       cout << "File opening is fail."<<endl;   
//     }  
//   return 0;  
// }  

// //C++ Read and Write Example
// //01
// #include <fstream>  
// #include <iostream>  
// using namespace std;  
// int main () {  
//    char input[75];  
//    ofstream os;  //ofstream for write 
//    os.open("testout.txt");  
//    cout <<"Writing to a text file:" << endl;  
//    cout << "Please Enter your name: ";   
//    cin.getline(input, 100);  
//    os << input << endl;  
//    cout << "Please Enter your age: ";   
//    cin >> input;  
//    cin.ignore();  
//    os << input << endl;  
//    os.close();  
//    ifstream is;    //ifstream for read
//    string line;  
//    is.open("testout.txt");   
//    cout << "Reading from a text file:" << endl;   
//    while (getline (is,line))  
//    {  
//    cout << line << endl;  
//    }      
//    is.close();  
//    return 0;  
// }  

// //02
// #include <fstream>  
// #include <iostream>  
// using namespace std;  
// int main () {  
//    char input[75];  
//    ofstream os("testout.txt");  
//    os.is_open();  
//    cout <<"Writing to a text file:" << endl;  
//    cout << "Please Enter your name: ";   
//    cin.getline(input, 100);  
//    os << input << endl;  
//    cout << "Please Enter your age: ";   
//    cin >> input;  
//    //cin.ignore();  
//    os << input << endl;  
//    os.close();  
//    ifstream is;   
//    string line;  
//    is.open("testout.txt");   
//    cout << "Reading from a text file:" << endl;   
//    while (getline (is,line))  
//    {  
//    cout << line << endl;  
//    }      
//    is.close();  
//    return 0;  
// }  
// //03
// #include <iostream>
// #include <fstream>
// using namespace std;
// int main ()
// {
//   char input[75];
//   ofstream os;
//   os.open ("test.txt");
  
//   cout << "Writing to a text file:" << endl;
//   for(int i=0; i<2;i++)
//   {
//     cout << "Please enter your name:" << endl;
//     cin.getline (input, 100);
//     os << input << endl;
//     cout << "please enter your age:" << endl;
//     cin >> input;
  
//     cin.ignore ();
//     os << input << endl;
//   }
//   os.close ();
 
//   ifstream is;
//   string line;
//   is.open (("test.txt"));
//   cout << "reading from a text file:" << endl;
  
//   while(getline(is,line))
//   {
//     cout<<line<<endl;
//   }
//   is.close();
//   return 0;
// }



// ///
// #include <iostream>  
// #include <fstream>  
// using namespace std;  
// int main () {  
//   char name[20];
//   int age;
//   ifstream x;
//   ofstream filestream("testout.txt");  //filestream is object or file name is also change
//   //filestream.close();         // -------> output = file opening is fail
//   filestream.is_open();
//   if (filestream.is_open())  
//   { 
//     cout<<"enter your name and age: "<<endl;
//     cin>>name;
//     cin>>age;
//     filestream<<"your name is : "<<name<<" and age is : "<<age<<endl;
//     filestream.close();  
//   }  
//   else cout <<"File opening is fail.";  
//   return 0;  
// }  