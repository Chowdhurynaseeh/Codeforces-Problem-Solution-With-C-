#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n,h,x, total = 0;
    vector<int> ppl;
    cin>>n>>h;
    for(int i = 1; i <= n; i++){
        cin>>x;
        ppl.push_back(x);
    }
    for(int i = 0; i < ppl.size(); i++){
        if(ppl[i] <= h){
            total += 1;
        }else {
            total += 2;
        }
    }
    cout << total <<endl;
}