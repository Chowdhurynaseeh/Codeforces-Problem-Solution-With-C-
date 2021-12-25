#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,k;
    cin>>n>>k;
    string  str;
    cin>>str;
    while(k-- != 0){
        for(int i = 0; i < n; i++){
            if(str[i] == 'B' && str[i+1] == 'G'){
                str[i] = 'G';
                str[i + 1] = 'B';
                i++;
            }
        }
    }
    cout << str << endl;
}