#include <iostream>
//#include <vector>
using namespace std;
#include <algorithm>
//void quickSort(int, int, int []);

int main(){
  ios::sync_with_stdio(0);
	cin.tie(0);
  
  int N, k = 0;

  cin >> N;
  cin >> k;

  int quickTest[N];
  for(int i = 0; i<N; i++){
    int x;
    cin >>x;
    quickTest[i] = x;
  }

  sort(quickTest, quickTest + N);
  //quickSort(0, N-1, quickTest);

  // for(int i = 0; i<N; i++)
  //   cout <<quickTest[i] << " ";

  cout << quickTest[N-k];
  
  return 0;
}
