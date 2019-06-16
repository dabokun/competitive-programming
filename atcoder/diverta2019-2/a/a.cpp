#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int nball, mp;
	cin >> nball >> mp;
	if (mp == 1) {
		cout << 0 << endl;
	} else {
		int remain = nball - mp;
		cout << remain << endl; 
	}
	return 0;
}
