  #include <iostream>
  using namespace std;
int main () {
    int i,position=5 ;

int arr[]={100,70,10,172,17,293,217,290,31};
int sizeofarray = sizeof(arr)/sizeof(arr[0]);
int element= 30;
  for (int i = sizeofarray - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    sizeofarray++ ;
   cout << "Array after insertion:";
    for (int i = 0; i < sizeofarray; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";


}
