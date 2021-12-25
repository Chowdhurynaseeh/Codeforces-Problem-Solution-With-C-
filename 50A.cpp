#include <iostream>
using namespace std;
int main() {
    int m ,n ;
    int o = 0;
    cin >> m;
    cin >> n;
    if(m*n < 2){
        o = 0;
    }else if(m*n >= 2){
        o = m *n / 2;
    }
    cout<<o<<endl;
}