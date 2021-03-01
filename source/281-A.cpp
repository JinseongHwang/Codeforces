//
// Created by jinseonghwang on 21. 3. 1..
//

#include <bits/stdc++.h>

using namespace std;

int main() {
    string inp;
    cin >> inp;

    if ('a' <= inp.front() && inp.front() <= 'z') {
        inp.front() -= 'a' - 'A';
    }

    cout << inp;

    return 0;
}