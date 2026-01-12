#include <iostream>
using namespace std;
int main () {
int arr[]={1,7,10,12,17,23,27,29,31};
int left =0;
int search_valuue = 10;
int sizeofarray = sizeof (arr)/ sizeof (arr[0]);
cout<<sizeofarray;
int raigt = sizeofarray-1;
while (left<=right){
    int mid=(left+right)/2;
    if (arr[mid] == search_valuue){
        cout<< "Data found at"<<mid,,endl;
    break;
    }
      else if (arr[mid] > search_valuue) {
        right = mid-1;
      }
      else if (arr[mid] < search_valuue) {
        right = mid+1;
      }
      else {
        cout<< " Data is not found"
      }
}
}
}
