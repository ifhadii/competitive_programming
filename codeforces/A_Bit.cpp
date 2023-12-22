#include <iostream>

using namespace std;

#define nl "\n"

int main() {
    int n, ans = 0; 
	string x;
    cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x; 
		
		if (x == "++X") {
			++ans;
			
		} else if (x == "X++") {
			ans++;
			
		} else if (x == "--X") {
			--ans;
			
		} else {
			ans--;
		}
	}
	cout << ans << nl;
    return 0;
}