/*
#include <iostream>
using namespace std;

void prime_string(string letter)
{
    int sum1 = 0;
    int sum2 = 0;
    
    for (int i = 0; i < letter.length() ; i=i+2){
        char x = letter.at(i);
       
        sum1 =sum1 + int(x);
    }
    for (int i = 1; i < letter.length(); i=i+2){
        char x = letter.at(i);
        sum2 = sum2 + int(x);
    }

    int newsum = abs(sum2 - sum1);
    if (newsum==3   || newsum==5  || newsum==7) {
        cout<< "Prime String "<<endl; }
    else{
        cout<<"Casual String "<<endl;}
}
int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string text;
        cin >> text;

        prime_string(text);
    }  
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
#include<iomanip>
char name[10],garde[2];
float M1,M2,M3,M4,M5;
float per;
class student
{
public:

    void read(){
    cin>>name;
    cin>>M1>>M2>>M3>>M4>>M5;
}
    void read_grade(){
    cin>>garde;
}
};
class percentage{
    public:
    void percentage_(){
    per = (((M1+M2+M3+M4+M5)*100)/500);
    }
};
class grade:public student
{
public:
    void b(){
        
    }
};
class report{
    public:
    void report_(){
        cout<<name<<endl;
        
        cout<<int(M1)<<" "<<int(M2)<<" "<<int(M3)<<" "<<int(M4)<<" "<<int(M5)<<" "<<endl;
        cout<<fixed<<setprecision(2)<<per<<"% ";
        cout<<garde<<endl;
    }

};
int main(){
    int n;
    cin >> n;
    percentage x;
    grade y;
    report z;
    for(int i = 0; i < n; i++){
        y.read();
        y.read_grade();
        x.percentage_();
        y.b();
        z.report_();
    }  
    return 0 ;
}
*/
#include<iostream>
#include<string>
using namespace std;
void palen(string s);
void vovl(string str){
    int length,j=0,count =0 ;
    char a[10];
    string s;
    length = str.length();
    for(int i = 0;i<length;i++){
        if(str[i] == 'a'|| str[i] == 'i'|| str[i] == 'e'|| str[i] == 'o'|| str[i] == 'u'){
            a[j] = str[i];
            count = count +1;
            j = j+1; 
        }
    }
    cout<<"count: "<<count;
    cout<<"a : "<<a[0];
    for (int i = 0; i < count; i++)
    {
        if(a[i] == 'a'|| a[i] == 'i'|| a[i] == 'e'|| a[i] == 'o'|| a[i] == 'u'){
            s = a[i];
        }
    }
    cout<<s<<endl;
    palen(s);

}

void palen(string s){
    int size;
    bool isPalindrome = true ;
    size = s.length();
    for (int i = 0; i < size; i++) {
		if (s[i] != s[size - i - 1]) {
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

}

int main()
{
    int n;
    string str;
    cout <<"enter number of test cases: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Enter the string: ";
        cin >>str;
        vovl(str);
    }

return 0;
}