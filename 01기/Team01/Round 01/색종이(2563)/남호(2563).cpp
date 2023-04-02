#include<stdio.h>
#include <iostream>
#include <string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#define endl '\n'
using namespace std;


int main()
{
   vector<vector<int>> v;
   v.assign(100, vector<int>(100, 0));
   int n, tmp1, tmp2;
   cin >> n;
   
   
   for (int i = 0; i < n; i++) {
      cin >> tmp1 >> tmp2;

      for (int j = tmp1; j <tmp1+10; j++) {

         for (int k = tmp2; k < tmp2+10; k++) {
            v[j][k] = 1;
            
         }
         
      }
      endl;
   }
   int cnt = 0;

   for (int i = 0; i < 100; i++) {
      for (int j = 0; j < 100; j++) {
         if (v[i][j] == 1){
            cnt++;
         }
      }
   }

   
   cout << cnt;


}
