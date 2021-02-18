//
// Created by jinseonghwang on 21. 2. 19..
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    string inp;
    cin >> inp;

    vector<int> numberList;
    for (const char &c : inp) {
        if ('1' <= c && c <= '3') {
            numberList.push_back(c - '0');
        }
    }

    sort(numberList.begin(), numberList.end());

    string result = "";
    for (const int &curr : numberList) {
        result.push_back(curr + '0');
        result.push_back('+');
    }
    result.pop_back();

    cout << result << '\n';

    return 0;
}