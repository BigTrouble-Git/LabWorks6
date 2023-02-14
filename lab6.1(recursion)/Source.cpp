#include <iostream>  
#include <iomanip> 


using namespace std; 

void array_create(int* arr, const int min, const int max, const int size, int i) {
	arr[i] = min + rand() % (max - min + 1);
	if (i < size - 1 )
		array_create(arr, min, max, size, i + 1);

}
	void array_out(int* arr, const int size, int i)
	{
		cout << setw(4) << arr[i];

		if (i < size - 1 )
			array_out(arr, size, i + 1);
	}
		
	int array_count(int* arr, int const size, int count, int i)
	{
		if (i <= size - 1) {

			if (arr[i] % 2 == 0 && arr[i] < 0)
				count++;

				array_count(arr, size, count, i + 1);
		}
			else 
				return count;
	}

	int sum_element(int* arr, int const size, int sum, int i)
	{
		if (i <= size - 1 ) {
			if (arr[i] % 2 == 0 && arr[i] < 0) 
				sum += arr[i];
				sum_element(arr, size, sum, i + 1);		
		}
		else
			return sum;

		}

	void zero_elements(int* arr, int const size, int i)
	{
		if (i < size - 1) {
			if (arr[i] % 2 == 0 && arr[i] < 0)
				arr[i] = 0;

			zero_elements(arr, size, i + 1);
		}
		
	}

	

		

	
	int main ()
	{
		srand((unsigned)time(NULL));
		const int n = 20;
		int p[n];
		int count = 0;
	

		const int max = 34;
		const int min = -20;
		

		array_create(p, min, max, n, 0);
		array_out(p, n, 0);

		cout << endl;
		cout << endl;

		array_count(p, n, count, 0);
		int num = array_count(p, n, count, 0);
		cout << "The number of negative even element = " << num << endl;;

		cout << endl;


		sum_element(p, n, 0, 0);
		int suma = sum_element(p, n, 0, 0);
		cout << "The sum of negative even elements = " << suma << endl;
		
		cout << endl;

		zero_elements(p, n, 0);
		array_out(p, n, 0);
	}
