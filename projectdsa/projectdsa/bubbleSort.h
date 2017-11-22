#include <iostream>
using namespace std;

void bubbleSort(){
	int i, j, swap, size, arr[50];

	cout << "Enter size of array: ";
	cin >> size;

	for (i = 0; i < size; i++){
		cout << "Enter " << i << " Array Element: ";
		cin >> arr[i];
	}

	cout << "The Unsorted Array is : \n";
	for (i = 0; i < size; i++){
		cout << arr[i] << " ";
	}

	//sorting 
	for (i = 0; i < size; i++){
		for (j = 0; j < size; j++){
			if (arr[i] < arr[j]){
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}//for sort loop end

	cout << "\nThe Sorted Array is : \n";
	for (i = 0; i < size; i++){
		cout << arr[i] << " ";
	}

}//bubble function end