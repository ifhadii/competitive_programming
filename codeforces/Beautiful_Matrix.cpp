#include <bits/stdc++.h>
#include <cmath>

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
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) {
			cin >> c;
			if (c == 1) {
				cout << abs(i - 3) + abs(j - 3) << nl; 
			}
		}
	}

	return 0;
}
