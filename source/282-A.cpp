#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;
	int result = 0;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		if (str[1] == '+') result++;
		else if (str[1] == '-') result--;
	}
	cout << result << '\n';

	return 0;
}