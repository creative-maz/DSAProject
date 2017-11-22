#include <iostream>
using namespace std;

void selection()
{
	int n, loc, temp, min, a[30];
	cout << "Enter size of array: ";
	cin >> n;

	for (int i = 0; i < n; i++){
		cout << "Enter " << i << " Array Element: ";
		cin >> a[i];
	}

	cout << "The Unsorted Array is : \n";
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}

	//sorting
	for (int i = 0; i<n - 1; i++)
	{
		min = a[i];
		loc = i;
		for (int j = i + 1; j<n; j++)
		{
			if (min>a[j])
			{
				min = a[j];
				loc = j;
			}
		}

		temp = a[i];
		a[i] = a[loc];
		a[loc] = temp;
	}

	cout << "\nThe Sorted Array is : \n";
	for (int i = 0; i<n; i++)
	{
		cout << a[i] << " ";
	}


}//selection end