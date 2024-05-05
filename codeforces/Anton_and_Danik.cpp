#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define rsz resize
#define ins insert

#define max *max_element
#define min *min_element

#define ar array
#define ll long long
#define ld long double

int main() {


	int a = 0, d = 0, x;
	string s;
	cin >> x;
	cin >> s;
	for (int i = 0; i < x; i++) {
		if (s[i] == 'A') {
			a++;
		} else {
			d++;
		}
	}


		if (a > d) {
			cout << "Anton" << "\n";
		} else if (d > a) {
			cout << "Danik" << "\n";
		} else {
			cout << "Friendship" << "\n";
		}



    return 0;
}
