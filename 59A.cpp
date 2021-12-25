#include <iostream>
#include <string>
using namespace std;
int c = 0,s = 0;
string strcopy = "";
void countLetter(string str){
    for(int i = 0; i < str.length(); ++i){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            c++;
        }else if(str[i] >= 'a' && str[i] <= 'z'){
            s++;
        }
    }
}
void toUpper(string str) {
    for(int i = 0; i < str.length(); ++i){
        strcopy += toupper(str[i]);
    }
}
void toLower(string str) {
    for(int i = 0; i < str.length(); ++i){
        strcopy += tolower(str[i]);
    }
}

int main() {
    string str;
    cin>>str;
    countLetter(str);
    if(c > s){
        toUpper(str);
    }else if(c <= s){
        toLower(str);
    }
    cout<<strcopy<<endl;
}