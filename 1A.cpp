#include <iostream>
#include <cmath>
using namespace std;
int main() {
    long long int n,k,a, x,y;
    cin>> n >> k >> a;
    x = (n % a == 0) ? n/a : n/a + 1;
    y = (k % a == 0) ? k/a : k/a + 1;
    cout<<x * y<<endl;
}