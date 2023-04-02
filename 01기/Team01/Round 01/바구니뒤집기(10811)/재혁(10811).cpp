#include<iostream>
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin >> m >> n;

    int* arr = new int[m];
    for(int i = 0; i < m; i++){
        arr[i] = i+1;
    }

    for(int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;

        for(;end > start; end--,start++){
            swap(arr[end-1], arr[start-1]);
        }
    }

    for(int i = 0; i < m; i++){
        cout << arr[i] << " ";
    }






    return 0;
}