#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <string>
#define endl '\n'
using namespace std;

set <int> A;
set <int> B;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a, b, input, a_b, b_a;

    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        cin >> input;
        A.insert(input);
    }

    for (int i = 0; i < b; i++) {
        cin >> input;
        B.insert(input);
    }

    a_b = A.size();
    b_a = B.size();
    for (auto iter = A.begin(); iter != A.end(); iter++) {
        if (B.find(*iter) != B.end()) { b_a--; }
    }

    for (auto iter = B.begin(); iter != B.end(); iter++) {
        if (A.find(*iter) != A.end()) { a_b--; }
    }

    cout << a_b + b_a;
}