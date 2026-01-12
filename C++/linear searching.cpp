#include<iostream>
using namespace std;
int main () {

int arr[]={1,7,10,12,17,23,27,29,31};

int i, item = 12;
int n = sizeof(arr)/sizeof(arr[0]);
for ( i=1; i<=n; i++)
{
if (arr[i]==item)
{

int location=i;
cout<<"Found"<<endl <<"location=" << location ;
break;
}
}
if (i>n)
    cout<<" Not Found"<<endl;
}
