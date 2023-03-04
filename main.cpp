#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

template <typename T>
void Swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
void Sort(vector <T> &arr) // Selection Sort
{
	int min_idx;
	for (int i = 0; i < arr.size() - 1; i++)
	{
		min_idx = i;
		for (int j = i + 1; j < arr.size(); j++)
		{
			if (arr[j] < arr[min_idx])
			{
				min_idx = j;
			}
		}

		Swap(arr[min_idx], arr[i]);
	}
}

template <typename T>
void Print(vector <T> arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	vector <int> arr;
	int size = 0;
	int num;

	cin >> size;

	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
	    num = rand() % 100;
		arr.push_back(num);
	}
	Print(arr);
	Sort(arr);
	Print(arr);

	system("pause");
	return 0;
}
