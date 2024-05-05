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


int n, h, x, ans = 0;
int main() {

	cin >> n >> h;

	while(n--) {
		cin >> x;
		ans++;
		if(x > h) {
			ans++;
		}
	}
	cout << ans << "\n";
    return 0;
}
