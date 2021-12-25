#include <iostream>
using namespace std;
int main() {
    string str,str2 = "",strWv = "";
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        str2 += tolower(str[i]);
        
    }
    for(int i = 0; i < str2.length(); i++){
        if(str2[i]== 'a' || str2[i]== 'e' ||str2[i] == 'i' ||str2[i]== 'o' ||str2[i]== 'u'||str2[i] == 'y'){
            continue;
        } else{
            strWv += (".");
            strWv += str2[i];
        }
    }
    cout<<strWv<<endl;
}