#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, a, b, count = 0;
    vector<int> v1,v2;
    cin >> n;
    while(n--){
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
    }
    
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v2.size(); j++){
            if(v1[i] == v2[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}