#include <bits/stdc++.h>
using namespace std;

bool isVowel(const char& c) {
	if (c == 'A' || c == 'a' || 
		c == 'O' || c == 'o' || 
		c == 'Y' || c == 'y' ||
		c == 'E' || c == 'e' ||
		c == 'U' || c == 'u' ||
		c == 'I' || c == 'i') return true;
	return false;
}

char getLowerConsonant(const char& c) {
	if ('A' <= c && c <= 'Z') return c + ('a' - 'A');
	return c;
}

int main() {
	string input; cin >> input;
	string result = "";

	for (const char& curr : input) {
		if (isVowel(curr)) continue;
		result.push_back('.');
		result.push_back(getLowerConsonant(curr));
	}
	cout << result << '\n';

	return 0;
}