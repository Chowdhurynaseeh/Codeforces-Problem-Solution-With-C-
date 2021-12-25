#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;

int main() {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);
    cout.tie(0);
    int n,a,b,totalPass = 0;
    cin>>n;
    while(n-- != 0){
        cin>>a>>b;        
        totalPass += b;
        totalPass -= a ;
        v.push_back(totalPass);
    }
    cout<<*max_element(v.begin(), v.end());
}