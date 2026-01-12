#include <iostream>

const int MAX_SIZE = 100;

int main() {
    int arr[MAX_SIZE];
    int size, element, position;


    std::cout << "Enter the size of the array: ";
    std::cin >> size;


    std::cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter the element to be inserted: ";
    std::cin >> element;

    std::cout << "Enter the position at which to insert the element (0-indexed): ";
    std::cin >> position;

    for (int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    size++;
    std::cout << "Array after insertion:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
