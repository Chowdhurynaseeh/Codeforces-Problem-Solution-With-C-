#include <iostream>
using namespace std;

int main() {
    int n, count = 0, v = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        v = v + i;
        n = n - v;
        if(n >= 0) {
            count++;
        }else{
            break;
        }
    }
    cout<<count<<endl;
}