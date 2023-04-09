#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int A,B,V;
    cin>>A>>B>>V;
    double n;
    n=(V-B)/(A-B);
    // a*n-b*n+b=v 
    int rounded=static_cast<int>(ceil(n+1.0-0.0000000000001));
    
    cout<<rounded;
   
}
