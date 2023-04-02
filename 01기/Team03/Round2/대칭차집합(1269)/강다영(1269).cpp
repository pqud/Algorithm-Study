#include<iostream>
#include<set>

using namespace std;

int main()
{
	int An = 0;
	int Bn = 0; 
	set<int> A;
	int InputNum = 0;
	int i = 0;
	
	cin >> An >> Bn;
	
	for(i = 0; i < An; i++)
	{
		cin >> InputNum;
		A.insert(InputNum);
	}
	
	for(i = 0; i < Bn; i++)
	{
		cin >> InputNum;
		
		if(A.find(InputNum) != A.end())
		{
			A.erase(InputNum);
		}
		else
		{
			A.insert(InputNum);
		}
	}
	
	cout << A.size();
}
