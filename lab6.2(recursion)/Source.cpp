#include <iostream>  
#include <iomanip> 


using namespace std;

void array_create(int* arr, const int min, const int max, const int size, int i) {
	arr[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		array_create(arr, min, max, size, i + 1);

}
void array_out(int* arr, const int size, int i)
{
	cout << setw(5) << arr[i];

	if (i < size - 1)
		array_out(arr, size, i + 1);
}

int max_number(int* arr, int const size, int i, int max_nu)
{
	if (i < size) 
	{
		if (arr[i] > max_nu) {
			max_nu = arr[i];			
		}
		max_number(arr, size, i + 1, max_nu);
	}
	else
		return(arr, size, i + 1, max_nu);
}


int min_number(int* arr, int const size, int i, int min_nu)
{
	if (i < size)
	{
		if (arr[i] < min_nu) {
			min_nu = arr[i];
		}
		min_number(arr, size, i + 1, min_nu);
	}
	else
		return(arr, size, i + 1, min_nu);
}


int sum_number(int max, int min)
{
	return (max + min);
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int count = 0;
	int max_nu = 0;
	int min_nu = 0;

	const int max = 100;
	const int min = -100;


	array_create(a, min, max, n, 0);
	array_out(a, n, 0);

	cout << endl;
	cout << endl;

	max_number(a, n, 0, max_nu);
	int max_n = max_number(a, n, 0, max_nu);
	cout << "The greatest number = " << max_n << endl;

	cout << endl;
	cout << endl;

	min_number(a, n, 0, min_nu);
	int min_n = min_number(a, n, 0, min_nu);
	cout << "The lowest number = " << min_n << endl;

	cout << endl;


	sum_number(max_n, min_n);
	int sum_num = sum_number(max_n, min_n);
	cout << "The sum of the greatest and the lowest numbers = " << sum_num;

	cout << endl;

}