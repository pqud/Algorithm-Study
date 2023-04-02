#include <iostream>
using namespace std;
int main()
{
	string str;
	getline(cin, str);	//한줄은 받음
	int count = 1;
	int i = 0;
//	if(str[0] == ' ')
//	{
//		count--;
//	}
//	else if(str[str.length()-1] == ' ')
//	{
//		count--;
//	}
//	
//	for(int i = 0; i < str.length(); i++)
//	{
//		if(str[i] == ' ')
//		{
//			count++;
//		}
//	}
	while(str[i] != '\0')
	{
		if(i == 0 && str[i] == ' ')
		{
			i++;
			continue;
			
		}
		else if (i == str.length()-1 &&  str[i] == ' ')
		{
			i++;
			continue;
			
		}
		
		else if(str[i] == ' ')
		{
			count++;
		}
		
		i++;
	}
    cout << count << endl;
    return 0;
    
}
