#include <iostream>

using namespace std;

#define nl "\n"

int main() {

    int n, a=0, d=0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i]=='A') {
            a++;
        } else {
            d++;
        }
    }
    if (d > a) {
        cout << "Danik" << nl;
    } else if (a > d) {
        cout << "Anton" << nl;
    } else {
        cout << "Friendship" << nl;
    }


    return 0;
}
