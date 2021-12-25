#include <iostream>
#include <string>
using namespace std;
int anton = 0, danik = 0;
void countThem(int n, string str) {
    for(int i = 0; i < n; i++){
        if(str[i] == 'A'){
            anton++;
        }
        if(str[i] == 'D'){
            danik++;
        }
    }
}
int main() {
    string str;
    int n;
    cin >> n >> str;
    countThem(n, str);
    string val = (anton > danik) ? "Anton" : (danik > anton) ? "Danik" : "Friendship";
    cout << val << endl;
}