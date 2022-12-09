#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int N; //입력받을 N개의 수
	
	cin >> N;
    
    vector<int> arr; //입력 받아서 넣을 벡터 
    arr.clear();
    
    int mean = 0; // 출력 1 : N개의 수들의 산술 평균 *소수점 아래 한 자리 반올림
	int middle = 0; //출력 2 : N개의 수들 오름차순 정렬 후 중앙 값 
	
	//출력 3 : 최빈 값
	int mostN[80001] = { 0, }; //각 숫자들이 몇 번 나왔는지 
	int mostNTime = -9999; //가장 자주 나온 수가 몇 번 나왔는 지 
	
	int range; //출력 4 : N개의 수들 중 최댓값과 최솟값의 차이

    for(int i = 0; i < N; i++)
    {
    	int tmp;
        cin >> tmp; //주의!! 입력되는 정수의 절대값은 4000이하 => 입력? -4000 ~ 4000 
        arr.push_back(tmp);
        mean += tmp;
        mostN[tmp+4000]++;
    }
    
    //출력1 
    mean = round((float)mean / N); //round함수 => cmath library 
    
    //출력2 
    sort(arr.begin(),arr.end());
    middle = arr[arr.size()/2];
    
    //출력3
    vector<int> mostNArr;
    mostNArr.clear();
	for(int i = 0; i<8001; i++){
		if(mostN[i] == 0) continue;
		
		if(mostN[i] >= mostNTime){
			//mostN = i;// - 4000; 
			if(mostN[i] == mostNTime){
				//mostNTime은 그대로
				//auto it = find(mostNArr.begin(), mostNArr.end(), i);
				if(find(mostNArr.begin(), mostNArr.end(), i) == mostNArr.end())
					mostNArr.push_back(i);
			}
			else{
				mostNTime = mostN[i];
				mostNArr.clear();
				mostNArr.push_back(i);
			}
		}
	}
	int print3 = 0;
	if(mostNArr.size() >= 2) 
		print3 = mostNArr[1] - 4000;
	else print3 = mostNArr[0] - 4000;
	 
    //출력4 
    range = arr.back() - arr.front();
    
    //답 
    cout << mean << '\n' << middle << '\n' << print3 << '\n' << range;
}
