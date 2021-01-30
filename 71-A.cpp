#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int n; cin >> n;
	while (n--) {
		string input; cin >> input;
		if (input.length() > 10) { // 10보다 길다는 조건에 만족하면 아래와 같이 문자열을 가공한다.
			input = input.front() + to_string(input.length() - 2) + input.back();
		}
		cout << input << '\n';
	}

	return 0;
}