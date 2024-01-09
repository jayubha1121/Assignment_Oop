//02 - Write a program of to sort the array using templates.

#include<iostream>
//#include<vector>
using namespace std;

// template function to perform bubble sort on array, arr
// n: size of arr
template<typename T>
void BubbleSort(T arr[], int n)
{
	for(int i=0;i<n-1;++i){
		for(int j=0;j<n-i-1;++j){
			if(arr[j]>arr[j+1]){
				T temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

// Template function to print array
// n: size of arr[]
template<typename T>
void PrintArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n\n";
}

int main()
{

    int arr[] = { 1, 10, 90, 100, -1, 11, 9, 14, 3, 2, 20, 19 };
    int n = sizeof(arr) / sizeof(int);

    cout << "Array Before Sorting: " << endl;
    PrintArray(arr, n);

    BubbleSort(arr, n);

    cout << "Array After Sorting: " << endl;
    PrintArray(arr, n);

}
