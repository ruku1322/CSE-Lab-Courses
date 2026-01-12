#include <iostream>
using namespace std;
int main () {
    int i ;
int arr[]={1,70,10,172,17,293,217,290,31};
int sizeofarray = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < sizeofarray - 1; i++) {
        for (int j = 0; j < sizeofarray-i- 1; j++) {
            if (arr[j+1] < arr[j]) {
              int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i=0;  i<sizeofarray  ; i++) {
    cout << arr[i]<<endl;
    }
}

