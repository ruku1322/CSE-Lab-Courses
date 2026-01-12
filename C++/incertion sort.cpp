#include <iostream>
using namespace std;
int main () {
    int i,j ;
int a[9]={1,70,10,172,17,293,217,290,31};
 for (i = 0 ; i <= 8; i++) {
 j = i;
 while ( j > 0 && a[j-1] > a[j]) {
int temp = a[j];
 a[j] = a[j-1];
 a[j-1] = temp;
 j--;
 }
 }
 for (i = 0 ; i <= 8 ; i++){
    cout << a[i]<<endl;
 }

}
