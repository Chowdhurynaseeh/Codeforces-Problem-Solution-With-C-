#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string str1, str2, str_1="", str_2=""; 
    cin>>str1;
    cin>>str2;
    for(int i = 0; i < str1.length(); i++) {
        str_1 +=  toupper(str1[i]);
        str_2 +=  toupper(str2[i]);
    }
    if(str_1 == str_2){
        cout << 0 << endl;
    }else if(str_1 > str_2){
        cout << 1 <<endl;
    }else{
        cout<< -1 << endl;
    }

}