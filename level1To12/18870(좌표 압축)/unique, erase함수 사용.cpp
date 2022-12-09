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
	
	//���� ���ʹ� �����ҰŶ� �� ���� �� �� ���� 
	vector<int> coor2(coor1);
	
	sort(coor1.begin(), coor1.end());
	
	//algorithm ����� �ߺ� �Ǵ� �� �����ִ� �Լ� unique
	//unique(coor1.begin(), coo1.end()); 
	
	/*
	before {1,2,2,3,4,4,5}
	after  {1,2,3,4,5,4,5}
	
	1. before�� �ߺ��Ǵ� �� 2, 4 ���� 		{1,2,_,3,4,_,5}
	2. �ߺ� ���� ����� �տ������� ä��		{1,2,3,4,_,_}
	3. ���� ������ �������� ����			{1,2,3,4,5,4,5} 
	4. unique�Լ��� ��ȯ �ּҴ� ������ ���� �� ���ҵ��� ù ���� �ּ� ���� ��ȯ => �迭 4��° �� 4�� �ּ� ��
	*/
	
	//���ϴ� ���� �� �����ϴ� �Լ�
	//unique�Լ��� ���� ���� ������ �ּ� �� �� �� ����.
	//�� �ּ� ��~������ ��� �ּ� ������ ������. 
	coor1.erase(unique(coor1.begin(), coor1.end()), coor1.end());
	
	for(int i = 0; i<N; i++){
		//auto : C++ 11�̻� ���� ��� ���� 
		auto it = lower_bound(coor1.begin(), coor1.end(), coor2[i]);
		cout << it - coor1.begin() << ' ';
	}
}
