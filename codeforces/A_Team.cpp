#include <iostream>

using namespace std;

#define nl "\n"

int main() {

	int n, x = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int z = n1 + n2 + n3;
        if (z >= 2) {
            x++;
        }
    }
    cout << x << nl;
	return 0;
}
