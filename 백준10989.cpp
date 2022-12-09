#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int N; //�Է¹��� N���� ��
	
	cin >> N;
    
    vector<int> arr; //�Է� �޾Ƽ� ���� ���� 
    arr.clear();
    
    int mean = 0; // ��� 1 : N���� ������ ��� ��� *�Ҽ��� �Ʒ� �� �ڸ� �ݿø�
	int middle = 0; //��� 2 : N���� ���� �������� ���� �� �߾� �� 
	
	//��� 3 : �ֺ� ��
	int mostN[80001] = { 0, }; //�� ���ڵ��� �� �� ���Դ��� 
	int mostNTime = -9999; //���� ���� ���� ���� �� �� ���Դ� �� 
	
	int range; //��� 4 : N���� ���� �� �ִ񰪰� �ּڰ��� ����

    for(int i = 0; i < N; i++)
    {
    	int tmp;
        cin >> tmp; //����!! �ԷµǴ� ������ ���밪�� 4000���� => �Է�? -4000 ~ 4000 
        arr.push_back(tmp);
        mean += tmp;
        mostN[tmp+4000]++;
    }
    
    //���1 
    mean = round((float)mean / N); //round�Լ� => cmath library 
    
    //���2 
    sort(arr.begin(),arr.end());
    middle = arr[arr.size()/2];
    
    //���3
    vector<int> mostNArr;
    mostNArr.clear();
	for(int i = 0; i<8001; i++){
		if(mostN[i] == 0) continue;
		
		if(mostN[i] >= mostNTime){
			//mostN = i;// - 4000; 
			if(mostN[i] == mostNTime){
				//mostNTime�� �״��
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
	 
    //���4 
    range = arr.back() - arr.front();
    
    //�� 
    cout << mean << '\n' << middle << '\n' << print3 << '\n' << range;
}
