
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
 
string getReflection(const string& a) {
    string b = a;
    reverse(b.begin(), b.end());
    for (char& ch : b) {
        if (ch == 'p') ch = 'q';
        else if (ch == 'q') ch = 'p';
    }
    return b;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << getReflection(a) << endl;
    }
    return 0;
}