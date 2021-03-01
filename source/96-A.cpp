//
// Created by jinseonghwang on 21. 3. 1..
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt = 0;
    char currChar = str.front();
    for (const char &c: str) {
        if (currChar == c) {
            cnt++;
            if (cnt == 7) {
                cout << "YES";
                break;
            }
        } else {
            currChar = c;
            cnt = 1;
        }
    }

    if (cnt < 7) {
        cout << "NO";
    }

    return 0;
}