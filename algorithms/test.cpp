#include <iostream>
#include "./quicksort.cpp"

int main() {
	int arr[7] = {7, 6, 5, 4, 3, 2, 1};
	quicksort(arr, 7);
	for(int i : arr)
		std::cout << i << ' ';
}