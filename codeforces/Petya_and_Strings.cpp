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
	
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++) {
		int n1 = tolower(s1[i]);
		int n2 = tolower(s2[i]);
		if (n1 < n2){
			cout << -1 << endl;
			return 0;
		} else if (n1 > n2) {
			cout << 1 << endl;
			return 0;
		}
	}
	cout << 0 << endl;

	return 0;
}
