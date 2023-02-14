#include <iostream>
#include <iomanip> 
#include <time.h>

using namespace std;


void array_create(int* arr, const int min, const int max, const int size, int i) {
	arr[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
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
	if (i < size ) {
		if (arr[i] % 2 == 0)
			count++;
		array_count(arr, size, count, i + 1);
	}
	else
		return count;


}

// ØÀÁËÎÍÈ

template <typename R>
void array_create(R* arr, R min, R max, const int size, R i) {
	arr[i] = min + rand() % (max - min + 1);
	if (i < size - 1)
		array_create<R>(arr, min, max, size, i + 1);
}



template <typename T>

void array_out(T* arr, const int size, T i)
{
	cout << setw(4) << arr[i];

	if (i < size - 1)
		array_out<T>(arr, size, i + 1);

}

template <typename D>
int array_count(D* arr, const int size, D count, D i)
{
	if (i < size) {

		if (arr[i] % 2 == 0)
			count++;

		array_count<D>(arr, size, count, i + 1);
	}
	else
		return count;

}





int main()
{
	srand((unsigned)time(NULL));
	const int n = 25;
	int p[n];
	int count = 0;


	const int max = 100;
	const int min = -100;


	array_create(p, min, max, n, 0);
	array_out(p, n, 0);

	cout << endl;
	cout << endl;

	array_count(p, n, count, 0);
	int num = array_count(p, n, count, 0);
	cout << "The number of even element = " << num << endl;;

	cout << endl;

	
	
}