#include<iostream>
using namespace std;
int main () {
int arr[]={1,7,10,12,17,23,27,29,31};
int search_valuue = 31;
int left =0;
int found=0;
int sizeofarray = sizeof(arr)/sizeof(arr[0]);
int right = sizeofarray -1;
while (left<=right){
    int mid=(left + right) /2;
    if (arr[mid] == search_valuue){
        cout<< "Data found at: "<<mid<<endl;
        found=1;
    break;
    }
      else if (arr[mid] > search_valuue) {
        right = mid-1;
      }
      else {
        left = mid+1;
      }
}
  if (found == 0) {
        cout<< " Data is not found";
      }
}

