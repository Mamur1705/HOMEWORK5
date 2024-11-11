#include <iostream>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int up_c = 0, l_c = 0;
    string upperChars = "", lowerChars = "";
    for (int i = 0; i<s.length(); i++) {
        char c = s[i];
        if (c>='A' && c<='Z') {
            up_c++;
            upperChars+=c;
        } else if (c>='a' && c<='z') {
            l_c++;
            lowerChars+=c;
        }
    }
    cout<<up_c;
    if (up_c>0) {
        cout<<" "<<upperChars;
    }
    cout<<endl;
    cout<<l_c;
    if (l_c>0) {
        cout<<" "<<lowerChars;
    }
    cout<<endl;
    return 0;
}
