#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main(void){
	int N;
	cin >> N;
	
	vector<int> coor1, coor2;
	coor1.clear();
	coor2.clear();
	
	for(int i = 0; i<N; i++){
		int tmp;
		cin >> tmp;
		coor1.push_back(tmp);
		if(find(coor2.begin(), coor2.end(), tmp) == coor2.end())
			coor2.push_back(tmp);
	}
	
	sort(coor2.begin(), coor2.end());
	
	for(int i = 0; i<coor1.size(); i++){
		int tmp = coor1[i];
		cout << find(coor2.begin(), coor2.end(), tmp) - coor2.begin();
		if(i!=coor1.size()-1)
			cout<<" ";
	}
}
