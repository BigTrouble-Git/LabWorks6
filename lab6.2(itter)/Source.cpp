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
	for (int i = 0; i < size; i++) {
		
		cout << setw(4) << arr[i];
	}
	cout << endl;
}

int max_number(int* arr, int const size)
{
	int max_num = arr[0];

	for (int i = 0; i < size; i++)
		if (arr[i] > max_num)
			max_num = arr[i];
		 return max_num;
	

}

int min_number(int* arr, int const size)
{
	int min_num = arr[0];

	for (int i = 0; i < size; i++)
		if (arr[i] < min_num)
			min_num = arr[i];
	return min_num;


}
int sum_number(int max, int min) 
{
	return (max + min);

}


int main() {
	
	const int min = -100;
	const int max = 100;
	
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];

	arr_create(a, n, min, max);
	arr_out(a, n);

	cout << endl;

	max_number(a, n);
	int max_n = max_number(a, n);
	cout << "The greatest number = " << max_n << endl;

	cout << endl;

	min_number(a, n);
	int min_n = min_number(a, n);
	cout << "The lowest number = " << min_n << endl;

	cout << endl; 

	sum_number(max_n, min_n);
	int sum_num = sum_number(max_n, min_n);
	cout << "The sum of the greatest and the lowest numbers = " << sum_num;
	cout << endl;
}
