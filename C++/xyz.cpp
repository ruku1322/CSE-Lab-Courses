#include <iostream>
using namespace std;
int arr[50] = {3,5,7,4,6};
int size_of_array = 5;
void PrintArray(){
    for(int i = 0 ; i<size_of_array ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void InsertIntoArray(int data, int position){
    for(int i = size_of_array -1 ; i>= position ; i--){
        arr[i+1] = arr[i];
    }
    arr[position] = data;
    size_of_array++;
}
void DeleteFromArray(int position){
    for(int i = position+1; i< size_of_array;i++){
        arr[i-1] = arr[i];
    }
    size_of_array--;

}
void updateArray(int data , int index){
arr[index]=data;
}
int main(){
    PrintArray();
    InsertIntoArray(100,3);

    PrintArray();
    DeleteFromArray(1);
    PrintArray();
    updateArray(20,2);
     PrintArray();
}
