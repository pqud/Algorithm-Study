#include<iostream>
#include<cstring>
#include<sstream>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string line;
    getline(cin, line);

    stringstream st;
    st.str(line);
    int result = 0;
    string tmp;
    while (st >> tmp) {
        result++;
    }

    cout << result;

    return 0;
}
