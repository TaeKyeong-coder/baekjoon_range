#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, string>, pair<int, string>);

main(void){
	//�Է�1 : �¶��� ���� ȸ���� �� 
	int N;
	cin >> N;
	
	//�Է�2 : ����, �̸�
	vector<pair<int, string> > info;
	info.clear();
	for(int i = 0; i<N; i++){
		int old;
		string name;
		
		cin >> old >> name;
		info.push_back(make_pair(old, name));
	}
	
	//sort(info.begin(), info.end(), comp);
	stable_sort(info.begin(), info.end(), comp);
	
	
	for(int i = 0; i<info.size(); i++){
		cout << info[i].first << " " << info[i].second;// << "\n";
		if(i!=info.size()-1)
			cout << "\n";
	}
		
} 

bool comp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}
