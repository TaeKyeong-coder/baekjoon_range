#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main(void){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	int N;
	cin >> N;
	
	vector<int> coor1;
	coor1.clear();
	
	for(int i = 0; i<N; i++){
		int tmp;
		cin >> tmp;
		coor1.push_back(tmp);
	}
	
	//원본 벡터는 정렬할거라서 값 복사 해 둘 벡터 
	vector<int> coor2(coor1);
	
	sort(coor1.begin(), coor1.end());
	
	//algorithm 헤더의 중복 되는 값 없애주는 함수 unique
	//unique(coor1.begin(), coo1.end()); 
	
	/*
	before {1,2,2,3,4,4,5}
	after  {1,2,3,4,5,4,5}
	
	1. before의 중복되는 값 2, 4 제거 		{1,2,_,3,4,_,5}
	2. 중복 없는 값들로 앞에서부터 채움		{1,2,3,4,_,_}
	3. 남은 공간은 원본값을 유지			{1,2,3,4,5,4,5} 
	4. unique함수의 반환 주소는 원본이 유지 된 원소들의 첫 번재 주소 값을 반환 => 배열 4번째 값 4의 주소 값
	*/
	
	//원하는 범위 값 삭제하는 함수
	//unique함수로 원본 유지 원소의 주소 값 알 수 있음.
	//그 주소 값~마지막 요소 주소 값까지 지워줌. 
	coor1.erase(unique(coor1.begin(), coor1.end()), coor1.end());
	
	for(int i = 0; i<N; i++){
		//auto : C++ 11이상 부터 사용 가능 
		auto it = lower_bound(coor1.begin(), coor1.end(), coor2[i]);
		cout << it - coor1.begin() << ' ';
	}
}
