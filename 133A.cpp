#include <iostream>
#include <string>
using namespace std;
int main() {
   string str, str2 = "HQ9+", mess = "NO";
   cin >> str;
   for(int i = 0; i < str.length(); i++){
       if(str[i] == str2[0] || str[i] == str2[1] || str[i] == str2[2]){
           mess = "YES";
           break;
       }
   }
    cout<<mess<<endl;
}