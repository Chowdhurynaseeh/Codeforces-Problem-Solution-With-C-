#include<iostream>
#include<string.h>
using namespace std;
int main() {
    string str,str1,str2;
    cin >> str;
    str1 = str.substr(1,str.length()-1);
    str2 = toupper(str[0]);
    str2 += str1;
    cout<<str2<<endl;
}