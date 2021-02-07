#include <bits/stdc++.h>
using namespace std;

bool cmpStr(const string& a, const string& b) {
	int len = a.length();
	for (int i = 0; i < len; i++) {
		// 소문자로 변환 후 비교한다.
		char currA = ('a' <= a[i] && a[i] <= 'z') ? a[i] : a[i] + ('a' - 'A');
		char currB = ('a' <= b[i] && b[i] <= 'z') ? b[i] : b[i] + ('a' - 'A');
		if (currA < currB) {
			cout << "-1\n";
			return true;
		}
		if (currA > currB) {
			cout << "1\n";
			return true;
		}
	}
	return false;
}

int main() {
	string a, b; cin >> a >> b;
	if (!cmpStr(a, b)) cout << "0\n";

	return 0;
}