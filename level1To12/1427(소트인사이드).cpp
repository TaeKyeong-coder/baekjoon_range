#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

main(void){
	//수가 주어지면 그 수의 각 자리수를 내림차순으로 정렬해보기
	string N;
	getline(cin, N);
	
	vector<int> arr;
	arr.clear();
	
	//cout<< "N.size is " << N.size() << endl;
	
	for(int i = 0; i<N.size(); i++){
		arr.push_back(N[i] - '0');
	}
	
//	cout << "arr.size is " << arr.size() << endl;
//	
//	for(int i = 0; i<arr.size(); i++)
//		cout << "arr[" <<i << "] is " << arr[i] << endl;

	sort(arr.begin(), arr.end());
	
	for(int i = arr.size()-1; i>=0; i--)
		cout << arr[i];
}
