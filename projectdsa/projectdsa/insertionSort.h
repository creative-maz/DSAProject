#include <iostream>
using namespace std;

void insertion()
{
	int i, j, n, temp, a[30];
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

	//Sorting

	for (i = 1; i <= n - 1; i++)
	{
		temp = a[i];
		j = i - 1;

		while ((temp<a[j]) && (j >= 0))
		{
			a[j + 1] = a[j];    
			j = j - 1;
		}

		a[j + 1] = temp;    
	}

	cout << "\nThe Sorted Array is : \n";
	for (i = 0; i<n; i++)
	{
		cout << a[i] << " ";
	}


}//insertion end