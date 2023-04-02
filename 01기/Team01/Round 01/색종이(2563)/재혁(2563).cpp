#include<iostream>
#define endl '\n'
using namespace std;
#define row 100
#define col 100


int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int matrix[col][row] = { 0 };
    int n; cin >> n;

    int result = 0;
    for (int k = 0; k < n; k++) {
        int x, y;
        cin >> x >> y;

        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (matrix[i][j] == 1)result++;
                matrix[i][j] = 1;
            }
        }

    }
    cout << 100 * n - result;

    return 0;
}