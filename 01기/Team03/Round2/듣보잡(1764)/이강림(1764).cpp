#include <iostream>
#include <vector> 
#include <algorithm>
#include <set> 

using namespace std;

int main(void) {

	cout.tie(NULL); 
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);	//없으면 시간 초과
	

	int N,M;
	
	set<string> not_listen;
	
	
	vector<string> result;
	
	cin >> N >> M;
	
	for(int i = 0; i < N ; i++){
		
		string name;
		cin >> name;
		not_listen.insert(name);
	}
		
	for(int i = 0; i < M; i++){
			
		string name1;
		cin >> name1;
		
		// 보지도 못한 사람 이름 name1을 듣지도 못한 사람 리스트인 not_listen과 비교 겹치는게 있으면 결과 벡터에 추가 
		if(not_listen.find(name1) != not_listen.end()){
			result.push_back(name1);
		}
    }
    
    cout << result.size() << '\n';
    
    // 알파벳 순서대로 출력 하기위해 벡터를 정렬시켜줌 
    sort(result.begin(), result.end());
    
    for (int i = 0; i < result.size(); i++) {
        
        cout << result[i] << ' ';
    }
    	
	return 0; 
}
