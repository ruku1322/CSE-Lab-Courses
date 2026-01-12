#include <iostream>
using namespace std;
int main () {
    int i ;

int arr[]={100,70,10,172,17,293,217,290,31};
int sizeofarray = sizeof(arr)/sizeof(arr[0]);

for (int j = 0; j <sizeofarray ; j++){
int mini= arr[j];
int mini_index=j;
 for (int i = j; i <sizeofarray ; i++)
 {
     if( arr[i]<mini ){
        mini=arr[i];
        mini_index=i;
     }

 }
 int temp =arr[j];
 arr[j]=arr[mini_index];
 arr[mini_index]=temp;
 }

  for (int i = 0; i <sizeofarray ; i++){
    cout << arr[i]<<"  ";
  }

}
