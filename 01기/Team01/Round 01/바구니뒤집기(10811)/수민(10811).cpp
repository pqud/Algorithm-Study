#include <iostream>
#include <algorithm>	// arr+x <= x < arr+y+1 
using namespace std;
int main()
{
    int N = 0;	//바구니 개수 1<= N <= 100 
    int M = 0;	//역순을 몇번 할 건지  1<= M <= 100 
    
    cin >> N >> M;
    int *arr = new int[N+1];
  
  	for(int i = 1; i <= N; i++)
	{
		arr[i] = i;
	}
	
	for(int j = 0; j < M; j++)
	{
		int x = 0;
		int y = 0;
		cin >> x >> y;
		reverse(arr+x, arr+y+1);
	}
	
	for(int i = 1; i <= N; i++)
	{
		cout << arr[i] << " ";
	}
    
    return 0; 
        
}
