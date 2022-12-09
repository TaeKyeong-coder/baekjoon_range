#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, int>, pair<string, int>);

main(void){
	//�Է�1 : �ܾ��� ���� N�� (���ĺ� �ҹ��ڷ� �̷���� ����) 
	int N;
	cin >> N;
	
	//�Է�2 : �ܾ� 
	vector<pair<string, int> > word;
	vector<string> tmpCheck;
	word.clear();
	tmpCheck.clear();
	for(int i = 0; i<N+1; i++){
		string tmpWord;
		getline(cin, tmpWord);
		if(i==0) continue;
		if(find(tmpCheck.begin(), tmpCheck.end(), tmpWord) == tmpCheck.end()){
			tmpCheck.push_back(tmpWord);
			word.push_back(make_pair(tmpWord, tmpWord.size()));
		}
	}
	
	sort(word.begin(), word.end(), comp);
	
	for(int i = 0; i<word.size(); i++){
		cout << word[i].first;// << "\n";
		if(i!=word.size()-1)
			cout << "\n";
	}
		
} 

bool comp(pair<string, int> a, pair<string, int> b) {
    if (a.second == b.second) return a.first < b.first; //ù ��° ���� ū �� 
    else return a.second < b.second; //�� ��° ���� ����  �� 
}
