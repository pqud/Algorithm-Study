#include<iostream>
#include<map>

using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	int InputNum = 0;
	int C = 0;
	map<int, int> m;
	int cnt = 0;
	int i = 0;
	
	cin >> N;
	
	for(i = 0; i < N; i++)
	{
		cin >> InputNum;
		m[InputNum]++;
	}

	cin >> M;
	
	for(i = 0; i < M; i++)
	{
		cin >> C;
		if(m.find(C) != m.end())
		{
			cout << m[C] << " ";
		}
		else
			cout << "0" << " "; 
	}
}
