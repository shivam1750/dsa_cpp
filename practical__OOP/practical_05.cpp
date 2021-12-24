//5) Write a program to check wheather a give string is palidrome or not  

#include <iostream>
#include <conio.h>
#include<cstring>
using namespace std;

int main() {
	char string1[10];
	int length;
	bool isPalindrome = true ;
	cout << "enter the string: ";
	cin >> string1;
	length = strlen(string1);
	for (int i = 0; i < length; i++) {
		if (string1[i] != string1[length - i - 1]) {
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome) {
		cout << "string is palindrome";
	}
	else {
		cout << "string is not palindrome";
	}
	_getch();


}
// palidrome = if string 1 == string 2 (string 2 = is reverse of string 1) then its called palidrome