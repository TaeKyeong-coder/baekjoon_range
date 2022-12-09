#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main(void){
	/*
	2차원 평면위의 점 N개
	좌표를 정렬
	
	1 순위 : x좌표가 증가하는 순
	2 순위 : y좌표가 증가하는 순 
	*/
	
	int N;
	cin >> N;
	
	//N개의 좌표 값 입력 받기
	//좌표값 : x, y쌍 => pair 클래스 사용(utility 헤더)
	//	pair<int, int> coordinate; 
	
	vector<pair<int, int> > coordinate;
	coordinate.clear();
	
	for(int i = 0; i<N; i++){
		int x, y;
		cin >> x >> y;
		//coordinate.push_back({x, y});
		coordinate.push_back(make_pair(y, x));
	}
	
	sort(coordinate.begin(), coordinate.end());
	
	for(int i= 0; i<coordinate.size(); i++){
		cout << coordinate[i].second << " " << coordinate[i].first << "\n";
	}
}
