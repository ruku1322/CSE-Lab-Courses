 #include <iostream>
  using namespace std;
int main () {
    int i,position=7 ;

int arr[]={100,70,10,172,17,293,217,290,31};
int sizeofarray = sizeof(arr)/sizeof(arr[0]);

  for ( i = position; i < sizeofarray; i++) {
        arr[i]= arr[i + 1];
    }

   cout << "Array after delete:";
    for ( i = 0; i < sizeofarray-1; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";


}
