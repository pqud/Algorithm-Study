#include<iostream>
#include<set>
#include <string>

using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	set<string> D;
	set<string> DBJ;
	set<string>::iterator iter;
	string InputName;
	int i = 0;
	
	cin >> N >> M;
	
	for(i = 0; i < N; i++)
	{
		cin >> InputName;
		D.insert(InputName);
	}
	
	for(i = 0; i < M; i++)
	{
		cin >> InputName;
		
		if(D.find(InputName) != D.end())
		{
			DBJ.insert(InputName);
		}
	}
	
	cout << DBJ.size() << endl;
	for(iter = DBJ.begin(); iter != DBJ.end(); iter++)
	{
		cout << *iter << endl;
	}

}
