#include <iostream>
using namespace std;

int main(){
  int N;
  cin>>N;
  int arr[N];

  for(int i = 0; i<N; i++)
    cin >> arr[i];

  for(int i = N-1; i>=0; i--){
    for(int j = 0; j<i; j++){
      int tmp = arr[j];
      if(arr[j] > arr[j+1]){
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }

  for(int i = 0; i<N; i++){
    cout << arr[i];
    if(i!=(N-1))
      cout << "\n";
  }
    
  
  return 0;
}
