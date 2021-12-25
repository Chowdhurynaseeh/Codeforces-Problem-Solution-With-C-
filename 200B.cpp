#include <iostream>
using namespace std;
int main() {
    int n;
    double getVal = 0.0;
    cin >> n;
    double a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i = 0; i < n; i++){
        getVal += (a[i]/100);
    }
    cout<<(getVal/n) * 100<<endl;
}