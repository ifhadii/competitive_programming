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

#define nl "\n";

int main() {
	

	int c = 0;
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		sort(s.begin(), s.end());

		if (s[i] == s[i + 1]) {
			c++;
		}
	}
	int x = s.size() - c;
	if (x % 2 != 0) {
		cout << "IGNORE HIM!" << nl; 
	} else {
		cout << "CHAT WITH HER!" << nl;
	}

	return 0;
}
