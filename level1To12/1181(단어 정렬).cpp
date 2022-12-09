#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<string, int>, pair<string, int>);

main(void){
	//입력1 : 단어의 개수 N개 (알파벳 소문자로 이루어져 있음) 
	int N;
	cin >> N;
	
	//입력2 : 단어 
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
    if (a.second == b.second) return a.first < b.first; //첫 번째 값이 큰 순 
    else return a.second < b.second; //두 번째 값이 작은  순 
}
