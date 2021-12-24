//group B - 04
//C++ FileStream example: writing to a file
// #include <iostream>  
// #include <fstream>  
// using namespace std;  
// int main () {  
//   ofstream filestream("testout.txt");  //filestream is object or file name is also change
//   //filestream.close()          -------> output = file opening is fail
//   if (filestream.is_open())  
//   {  
//     filestream << "Welcome to BOSS.\n";  
//     filestream << "C++ Tutorial.\n";  
//     filestream.close();  
//   }  
//   else cout <<"File opening is fail.";  
//   return 0;  
// }  

//C++ FileStream example: reading from a file
// #include <iostream>  
// #include <fstream>  
// using namespace std;  
// int main () {  
//   string srg;  
//   ifstream filestream("testout.txt");  
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

//C++ Read and Write Example
//01
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
//02
#include <fstream>  
#include <iostream>  
using namespace std;  
int main () {  
   char input[75];  
   ofstream os("testout.txt");  
   os.is_open();  
   cout <<"Writing to a text file:" << endl;  
   cout << "Please Enter your name: ";   
   cin.getline(input, 100);  
   os << input << endl;  
   cout << "Please Enter your age: ";   
   cin >> input;  
   //cin.ignore();  
   os << input << endl;  
   os.close();  
   ifstream is;   
   string line;  
   is.open("testout.txt");   
   cout << "Reading from a text file:" << endl;   
   while (getline (is,line))  
   {  
   cout << line << endl;  
   }      
   is.close();  
   return 0;  
}  