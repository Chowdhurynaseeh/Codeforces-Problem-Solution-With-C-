#include <iostream>
#include <string>
using namespace std;
int count_unique_char(string str) {

	int hash[128] = { 0 };
	int i, c = 0;

	for (i = 0; i < str.length(); ++i) {
		hash[str[i]] = 1;
	}

	for (i = 0; i < 128; ++i) {
		c += hash[i];
	}

	return c;

}
int main() {
    string str,str2 = "";
    getline(cin,str);
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str2 += str[i];
        }
    }
    int x = count_unique_char(str2);
    cout<<x<<endl;

}