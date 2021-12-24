#include<iostream>

using namespace std;
// songle line comment
/*
multiline 
comment
*/
/*
int main(){
    cout<<"hello";
    return 0;
}
*/
int main(){
    char a[105];
    int x= 0;
    int i = 0;
    bool flag= false;
    cin>>a;
    while (a[i]!='\0')
    {
        if (a[i]=='1'){
            while (a[i]=='1'){
                x++,i++;}    
        }
        else{
            while (a[i]=='0'){
                 x++,i++;}
            }
        if(x>=7){
            flag=true;
            break;
        }
        x=0;       
    }
    if (flag){
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no\n";
    }
    
}