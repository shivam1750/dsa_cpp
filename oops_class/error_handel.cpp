//Error Hanlind in File I/O

// #include <iostream>
// #include <fstream>

// using namespace std;
// int main(){
// 	ifstream file;        //reading from a file
// 	file.open("xyz");
// 	if(file.is_open())
// 	{
// 		cout<<"File successfully open";
// 		file.close();
// 	}
// 	else
// 	{
// 		cout<<"Error opening file";
// 	}
// 	return 0;
// }

//File I/O with Member Function

//The syntax for Opening a file:

// #include <iostream>
// #include <fstream>

// using namespace std;
// int main(){
// 	ofstream file;
// 	file.open("example.txt");
// 	return 0;
// }

//The syntax for Closing a file:

// #include <iostream>
// #include <fstream>

// using namespace std;
// int main(){
// 	ofstream file;
// 	file.open("example.txt");
// 	file.close();
// 	return 0;
// }

//The syntax for Reading and Writing a file:
//File I/O with Member Function
#include <iostream>
#include <fstream>

using namespace std;
int main(){
	char text[200];
	fstream file;
	file.open("example.txt", ios::out | ios::in);
	cout<< "Hello there!!!"<<endl;

	cin.getline(text, sizeof(text));

	file<<text<<endl;     // writing on file

	file>> text;   // reading from file

	cout <<text <<endl;

	file.close();    // closing the file

	return 0;
}

//Printer Output

// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
// 	cout << "\n Printing output using Printer"<< endl;
// 	ofstream print("LPT1");  // provided printer is connected to first parallel port

// 	if(!print) // it will exit with 1 if printer is not connect
// 	{
// 		cout<< "\n No Printer connected";
// 		return 1;
// 	}

// 	print<<"\nThis first line printed";
// 	print<<"\nNumber"<< 12345 ;
// 	print<<"\nFloat:"<<345.6778;
// 	print<<"\nchar:"<<'c';

// 	print.close();    // close printer
// 	return 0;
// }