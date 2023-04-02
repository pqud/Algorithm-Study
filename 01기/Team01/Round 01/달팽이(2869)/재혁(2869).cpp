#include<iostream>
#include<cmath>
#define endl '\n'
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, B, V;
    cin >> A >> B >> V;
    int day = 1;

    int tmp = V - A;
    if (tmp <= 0) {
        cout << day;
        return 0;
    }
    day += tmp / (A - B);
    tmp = tmp % (A - B);
    while (tmp > 0) {
        tmp -= A;
        day++;
        if (tmp <= 0)break;
        tmp += B;
    }

    cout << day;



    return 0;
}