#include <iostream>
using namespace std;
void quickSort(int, int);

int quick[5] = { };

int main(){
  int sum = 0;

  for(int i = 0; i<5; i++){
    cin >> quick[i];
    sum += quick[i];
  }

  for(int i = 4; i>=0; i--){
    for(int j = 0; j<i; j++){
      if(quick[j] > quick[j+1])
        swap(quick[j], quick[j+1]);
    }
  }

  cout << sum/5 << endl << quick[2];

  //quickSort()
  
  return 0;
}

// void quickSort(int i, int j){
//   if(i>=j) return;
//   int pivot = quick[(i+j)/2];

//   int left = i;
//   int right = j;

//   while(left<=right){
//     while(quick[left]<pivot) left++;
//     while(quick[right]>pivot) right--;

//     if(left<=right){
//         int tmp = quick[left];
//       quick[left] = quick[right];
//       quick[right] = tmp;

//       left++; 
//       right--;
//     }
//   }

//   quickSort(i, right);
//   quickSort(left, j);
// }
