#include <iostream>
using namespace std;
int main () {
    int i,j,small_index,temp ;
int A[9]={1,70,10,172,17,293,217,290,31};

for(i=0; i<=8; i++)
{
 small_index=i;
for(j=i+1; j<=9; j++)
{
if(A[j] < A[small_index])
small_index=j;
}
temp=A[i];
A[i]=A[small_index];
A[small_index]=temp;
}
 for (i = 0 ; i <= 9 ; i++){
    cout << A[i]<<endl;
 }
}
