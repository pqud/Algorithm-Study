#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

int main(void) {

		cout.tie(NULL); 
		cin.tie(NULL);
    	ios_base::sync_with_stdio(false);	//없으면 시간 초과
	
	int N, M;  
	
    cin >> N;
    
    vector<int> have_N(N); // 기본값 0으로 초기화된 N개의 원소를 가지는 vector v를 생성 
    
    
    // 상근이가 가지고 있는 숫자 카드에 적혀있는 정수 M 입력 
     for (int i = 0; i < N; i++) { 
     	
     	int input_N;
     	cin >> input_N; 
        have_N[i] = input_N;  
        
    }
    
    cin >> M;

	vector<int> find_M(M);
	
	vector<int> result(M); // 결과값 출력 벡터 
	
	// 상근이가 몇 개 가지고 있는 숫자카드인지 구하는 정수 N 입력 
    for (int i = 0; i < M; i++) {
    	
        int input_M;
     	cin >> input_M; 
        find_M[i] = input_M;  
    }
    
    // 이분탐색 알고리즘을 사용하기위해 벡터를 정렬시켜줌 
    sort(have_N.begin(), have_N.end());
	
	
    
	
	for (int i = 0; i < M; i++) {
		
		int num = find_M[i];
        
         auto have_low = lower_bound(have_N.begin(), have_N.end(),num); // num값이 처음 나오는 인덱스를 반환 
         auto have_high = upper_bound(have_N.begin(), have_N.end(),num);// num을 초과하는 값이 처음 나오는 인덱스를 반환 
         
         result[i] = have_high - have_low; // 초과값 - 처음 나온값 = 중복되는 원소의 개수가 나온다, 이것을 결과 벡터에 넣어준다. 
    }
	
 	// 결과 값 벡터 출력 
    for (int i = 0; i < M; i++) {
        
        cout << result[i] << ' ';
    }
    
    return 0;
	
}

