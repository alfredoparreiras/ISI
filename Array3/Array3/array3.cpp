#include<iostream>
#include<iomanip>
using namespace std;


//FUNCTIONS PROTOTYPE



int main() {




}
//1)	Write a function that initializes an array of real numbers with one value passed as a parameter.
void display(int d[5]);
int main()
{
	int numbers[5] = { 1,2,3,4,5, };
	display(numbers);



}
void display(int d[5]) {
	cout << " numbers " << endl;
	for (int i = 0; i < 5; i++) {
		cout << d[i] << endl;
	}
}

// 2)		Write a function that initializes each element of an array of integers with the cube of its index.

int cubeOfIndex(int arr1[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i] * arr1[i] * arr1[i];
	}


}
int main()
{
	const int LENGTH = 5;
	int arr[LENGTH] = { 0,0,0,0,0 };
	cubeOfIndex(arr[LENGTH]);

}


// 3)		Write a function that multiplies each element of an array of doubles by a real number passed as a parameter.

void multiply(double array[], int arraySize, double x) {


	for (int i{ 1 }; i < arraySize; i++) {

		array[i] *= x;
	}

	for (int i{ 1 }; i < arraySize; i++) {

		cout << array[i] << "\t";
	}
}


//4)	Write a function that returns the largest element in an array of floats passed as a parameter.

int sum(int a, int b);
int main()
{
	int a, b, max, min;
	cout << " enter a number " << endl;
	cin >> a;
	cout << " enter another number " << endl;
	cin >> b;
	int s = sum(a, b);
	cout << " the sum between two number is " << s << endl;

}
int sum(int a, int b) {
	if (a > b)
		return 0;
	return a + sum(a + 1, b);
}

//5)	Write a function that returns the average of an array of floats passed as a parameter.

float avgArray(float arr[], int size)
{
	float sum = 0;

	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return sum / size;
}

int main()
{
	const int LENGTH = 5;
	float arr[LENGTH];
	float avg;
	for (int i = 0; i < LENGTH; i++)
	{
		cout << "Enter the float number: " << endl;
		cin >> arr[i];
	}

	avg = avgArray(arr, LENGTH);

	cout << "THE average is : " << avg;

}


//6)	Write a function that receives an array of integer and an integer n. It should return true if n is in the array, and false if not.
bool contains(int array[], int arraySize, int n) {

	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] == n) {
			return true;
		}
	}

	return false;
};

//7)	Write a function that receives an array of integers and an integer n. The function should return the number of times that this integer n is found in the array (number of occurrences).

int maxFreq(int* arr, int n) {
	//using moore's voting algorithm
	int res = 0;
	int count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[res]) {
			count++;
		}
		else {
			count--;
		}

		if (count == 0) {
			res = i;
			count = 1;
		}

	}

	return arr[res];
}

int main()
{
	int arr[] = { 40,50,30,40,50,30,30 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int freq = maxFreq(arr, n);
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == freq) {
			count++;
		}
	}
	cout << " Element " << maxFreq(arr, n) << " occurs " << count << " times" << endl;;
	return 0;
}

//8)	Write a function that receives an array of floats, and that displays both the indices of the values that are strictly negative, as well as the values in question.


float negativeArray(float numbers[], const int LENGTH)
{
	for (int i = 0; i < LENGTH; i++)
	{
		if (numbers[i] < 0)
		{
			return numbers[i];
		}
	}

}

float positiveArray(float numbers[], const int LENGTH)
{
	for (int i = 0; i < LENGTH; i++)
	{
		if (numbers[i] > 0)
		{
			return numbers[i];
		}
	}
}

int main()
{
	const int LENGTH = 5;
	float array[LENGTH] = { 5.55 , -6.454 , -2.5324 , 4.5432 , -10.101010101 };

	positiveArray(array, LENGTH);
	negativeArray(array, LENGTH);
}



//9 	Write a function that receives an array of integers and an integer n. The function should return the number of elements in the array that are greater or equal to n.

int elementsOverThreshold(int array[], int arraySize, int n) {

	int counter{ 0 };
	for (int i{ 0 }; i < arraySize; i++) {
		if (array[i] > n) {
			counter += 1;
		}
	}

	return counter;
};

//10)	Write a function that receives an array of integers and an integer n. The function applies n rightward rotations to the values contained in the elements of the array. Upon each rotation, the value of the last element of the array is placed in the first element, and the others are moved one element to the right.
//Example: If the function receives an array containing : 4 3 8 3 6 4 9 5 0 1 5 2, and if n is 4, then after the call, the array will contain : 0 1 5 2 4 3 8 3 6 4 9 5.

void rotate(int arr[], int n)
{
	int x = arr[n - 1], i;
	for (i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];
	arr[0] = x;
}


int main()
{
	int arr[] = { 1, 2, 3, 4, 5 }, i;
	int n = sizeof(arr) /
		sizeof(arr[0]);

	cout << "Given array is " << endl;
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	rotate(arr, n);

	cout << "Rotated array is " << endl;
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	return 0;
}
