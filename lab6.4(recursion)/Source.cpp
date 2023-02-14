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
	cout << setw(4) << arr[i];

	if (i < size - 1)
		array_out(arr, size, i + 1);
}

int array_count(int* arr, int const size, int count, int i, int C)
{
	if (i <= size - 1) {

		if (arr[i] > C)
			count++;

		array_count(arr, size, count, i + 1, C);
	}
	else
		return count;
}

int dobutok(int* arr, int const size, int k, int& dob) {

	if (k + 1 <= size) {
		dob *= arr[k];

		dobutok(arr, size, k + 1, dob);
	}
	else
		return (arr, size, k , dob);
}

int times_after(int* arr, int const size, int i, int k, int max_abs )
{	
	int  dob = 1;
	if (i < size) {

		if (abs(arr[i]) >= max_abs) {
			max_abs = abs(arr[i]);
			k = ++i;
		}
		times_after(arr, size, i + 1, k, max_abs);
				
	}
	else
		return dobutok(arr, size, k,dob);

}
	



void Find(int* arr, int tmp, int& j) 
{
	if (tmp > arr[j])
	{
		j++;
		Find(arr, tmp, j);
	}
}
void Shift(int* arr, int j, int k) 
{
	arr[k + 1] = arr[k];
	if (k > j)
		Shift(arr, j, k - 1);
}
void Sort(int* arr, const int size, int i) 
{
	int tmp = arr[i]; 
	int j = 0; 
	Find(arr, tmp, j);
	Shift(arr, j, i - 1);
	arr[j] = tmp;
	if (i < size - 1)
		Sort(arr, size, i + 1); 
}











int main()
{
	srand((unsigned)time(NULL));
	
	

	int n, C;
	int* mass;
	cout << "Write the number in array ";  cin >> n;
	cout << endl;
	cout << "Write the value of C ";  cin >> C;
	cout << endl;

	mass = new int[n];
	int count = 0;
	const int max = 40;
	const int min = -40;


	array_create(mass, min, max, n, 0);
	cout << "Created array  "; array_out(mass, n, 0);

	cout << endl;
	cout << endl;

	array_count(mass, n, count, 0, C);
	int num = array_count(mass, n, count, 0, C);
	cout << "The number of numbers that are bigger than C = " << num << endl;;

	cout << endl;

	times_after(mass, n, 0,0,0);
	int product_after = times_after(mass, n,0,0,0);
	cout << "The product of the numbers after the largest modulo number =  " << product_after;
	
	cout << endl;
	
	Sort(mass, n, 1);

	cout << endl;

	cout << "Sorted array  "; array_out(mass, n, 0); 
	cout << endl;
}
