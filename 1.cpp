#include <iostream>
using namespace std;
const int SIZE = 10;
void bubble_sort(int* arr){
	int a, b, t;
	cout << "Исходный массив:";
	for (int i = 0; i < SIZE; i++) cout << arr[i] << " ";
	cout << "\n";
	for (a = 1; a < SIZE; a++) {
		for (b = SIZE - 1; b >= a; b--) {
			if (arr[b - 1] > arr[b]) {
				t = arr[b - 1];
				arr[b - 1] = arr[b];
				arr[b] = t;
			}
		}
	}
	cout << "Отсортированный массив: ";
	for (int i = 0; i < SIZE; i++) cout << arr[i] << " ";
}

int binary(const int* arr,int target) {
	int left = 0;
	int right = SIZE-1;
	while (left <= right){
		int mid = left + (right - left) / 2;
		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "");
	int arr[SIZE] = { -5, 3, -2, 8, -1, 0, 6, -3, 4, -4 };
	bubble_sort(arr);
	int target;
	cout << "\nВведите элемент для поиска:";
	cin >> target;
	int index = binary(arr, target);

	if (index != -1) {
		cout << "Элемент " << target << " найден в позиции " << index << endl;
	}
	else {
		cout << "Такого элемента нет в строке!";
	}
}
