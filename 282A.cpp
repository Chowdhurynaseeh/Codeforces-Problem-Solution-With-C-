#include <iostream>
#include<string.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x = 0;
    for(int i = 0; i < n; ++i) {
        string str;
        cin>>str;
        int f = str.length() - 1;
        if(str[0] == '+') {
            ++x;
        }else if(str[f] == '+'){
            x++;
        }else if (str[0] == '-')
        {
            --x;
        }else if(str[f] == '-'){
            x--;
        }
    }
    cout<<x<<endl;
}