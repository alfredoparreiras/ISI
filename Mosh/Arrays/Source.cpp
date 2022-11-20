#include<iostream>;
using namespace std; 


const int rows{ 2 };
const int cols{ 3 };
// FUNCTIONS FOR SORTING ARRAY
//void swap(int numbers[], int i, int j) {
//		int temp = numbers[i];
//		numbers[i] = numbers[j];
//		numbers[j] = temp;
//
//}
//
void sort(int numbers[], int size) {
	for (int pass{ 0 }; pass < size; pass++) {
		for (int i{ 0 }; i < size; i++) {
			if (numbers[i] < numbers[i - 1]) {
				int temp = numbers[i];
				numbers[i] = numbers[i - 1];
				numbers[i - 1] = temp;

			}
		}
	}
}

	// Compare
	//for (int i{ 0 }; i < size(numbers); i++) {
	//	for (int j{ 0 }; j < size(numbers); j++) {
	//		if (numbers[i] > numbers[i + 1]) {
	//			int temp = numbers[i];
	//			numbers[i] = numbers[i + 1];
	//			numbers[i + 1] = temp;
	//	
	//		}
	//	}


void printMatrix(int matrix[rows][cols]) {
	for (int row = 0; row < rows; row++) {
		for (int col{ 0 }; col < cols; col++) {
			cout << matrix[row][col] << " ";
		}
	}
}

int main() {


	int numbers[15] = { 12,23,34,20,210,110,1,29,2000,182,1092,4,2,12,4 };

	//cout << "Original Array" << endl;
	//for (int number : numbers) {
	//	cout << number << " ";
	//}

	//cout << endl;


	for (int i{ 0 }; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
		cout << numbers[i] << " Number" << endl;
	}


	// Podemos usar a size function to get the size of an array.
	for (int i{ 0 }; i < size(numbers); i++) {
		cout << numbers[i] << " Number" << endl;
	} 


	 size t >> is a type or datatype defined in standard library, define to storage the size of the largest object the system can handle. 

	cout << sizeof(int) << endl; 
	cout << sizeof(size_t) << endl;

	cout << numeric_limits<long long>::min() << endl;
	cout << numeric_limits<long long>::max() << endl;
	cout << numeric_limits<size_t>::min() << endl;
	cout << numeric_limits<size_t>::max() << endl;

	 At  the end size_t is the same size of unsigned long long.

	// Unpacking arrays
	// In C++ we called this by STRUCTURED BINDING. Doesn't work. 
	

	// SORTING ALGOS

	//bool swapped{ false };


	//sort(numbers, 15);

	//cout << "Mosh Sorting" << endl;
	//for (int number : numbers) {
	//	cout << number << " ";
	//}

	//cout << endl;

	for (int i{ 0 }; i < 15; i++) {
		for (int j{ 1 }; j < 15; j++) {
			if (numbers[i] < numbers[i - 1]) {
				int temp = numbers[i];
				numbers[i] = numbers[i - 1];
				numbers[i - 1] = temp;
		
			}
		}
	
	}


	//cout << "Alfredo Sorting" << endl;
	//for (int number : numbers) {
	//	cout << number << " ";
	//}

	// Multi-Dimensional Arrays


	int matrix[rows][cols] = {
		{12,24,32},
		{452,23,12}
	};

	printMatrix(matrix);
}