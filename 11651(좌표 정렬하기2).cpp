#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main(void){
	/*
	2���� ������� �� N��
	��ǥ�� ����
	
	1 ���� : x��ǥ�� �����ϴ� ��
	2 ���� : y��ǥ�� �����ϴ� �� 
	*/
	
	int N;
	cin >> N;
	
	//N���� ��ǥ �� �Է� �ޱ�
	//��ǥ�� : x, y�� => pair Ŭ���� ���(utility ���)
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
