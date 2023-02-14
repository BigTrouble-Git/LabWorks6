#include <iostream>
#include <iomanip> 
#include <time.h>

using namespace std;

void arr_create(int* arr, int const size, int const min, int const max)
{
	for (int i = 0; i < size; i++) {
		arr[i] = min + rand() % (max - min + 1);
	}
}

void arr_out(int* arr, int const size)
{
	cout << "Created_array   ";
	for (int i = 0; i < size; i++) {

		cout << setw(4) << arr[i];
	}
	cout << endl;
}  



int array_count(int* arr, int const size, const int C)
{
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > C)
			count += 1;


	}
	return count;
}

int dobutok(int* arr, int const size, int& k) {

	int dob = 1;
	for (k; k < size; k++) {
		dob *= arr[k];
	}
	return dob;

}

int times_after(int* arr, int const size)
{
	int k = 0;
	int max_abs = abs(arr[0]);
	for (int i = 0; i < size; i++) {
		if (abs(arr[i]) >= max_abs) {
			max_abs = abs(arr[i]);
			k = ++i;

		}

	}
	return dobutok( arr, size, k);
	
}


void Sort(int* arr, const int size) 
{
	for (int i = 1; i < size; i++) 
	{
		int tmp = arr[i]; 
		int j = 0; 
		while (tmp > arr[j])
			j++;
		for (int k = i - 1; k >= j; k--) 
			arr[k + 1] = arr[k];
		arr[j] = tmp; 
	}
}






int main()
{
	const int min = -40;
	const int max = 40;
	int* mass;

	srand((unsigned)time(NULL));
	int n, C; 
	cout << "Write the number in array ";  cin >> n;
	cout << endl;
	cout << "Write the value of C ";  cin >> C;
	cout << endl;
	mass = new int[n];

	

	arr_create(mass, n, min, max);
	arr_out(mass, n);

	cout << endl;

	array_count(mass, n, C);
	int count = array_count(mass, n, C);
	cout << "The number of numbers that are bigger than C = " << count << endl;

	cout << endl;

	times_after(mass, n);
	int product = times_after(mass, n);
	cout << "The product of the numbers after the largest modulo number = " << product << endl;

	

	cout << endl;
	Sort(mass, n);
	arr_out(mass, n);
}