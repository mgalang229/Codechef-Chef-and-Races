#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	vector<int> a(4);
	for(int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	vector<int> counter(4, 0);
	for(int i = 0; i < 4; i++) {
		counter[a[i]-1]++;
	}
	int cnt = 0;
	for(int i = 0; i < 4; i++) { // count the no. of categories wherein they are different
		if((i == a[0] - 1 || i == a[1] - 1) && counter[i] == 1) {
			cnt++;
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
