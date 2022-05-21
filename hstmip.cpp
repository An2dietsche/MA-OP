/*
Purpose: Reads the data from the file and finds the mean, median, and mode while showing a histogram.  
*/

#include <iostream>
#include <cstdio>

using namespace std;

// Read an array from a file
int readFile(int *arr) {
	cout << "Enter input file name\n";
	
	char fileName[1000];
	// Get file name
	cin >> fileName;

	// Open file
	FILE *fp = fopen(fileName, "r");

	int n = 0, i;

	// Reading from the file
	while(fscanf(fp, "%d", &i) == 1) {
		arr[n] = i;
		n++;
	}

	//Close file
	fclose(fp);
	return n;
}

// Sort the array in ascending order
void sort(int *arr, int size) {
	int i, j, swap;

	// Bubble sort
	for (i = 0 ; i < (size - 1); i++) {
		for (j = 0 ; j < (size - i - 1); j++) {

			// Swap consecutive elements if they are not in the correct order
			if (arr[j] > arr[j + 1]) {
				swap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = swap;
			}
		}
	}
}

// Print the array (40 elements in a line)
void print(int *arr, int size) {
	int i, j;
	for(i = 0; i < size; i += 40) {
		for(j = i; (j < (i + 40)) && (j < size); j++) {
			cout << arr[j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

// Displays mean of the array
void mean(int *arr, int size) {
	int i;
	double mean = 0.0;

	// Add all values
	for(i = 0; i < size; i++) {
		mean += arr[i];
	}

	// Calculate mean
	mean /= (double) size;
	cout << "Mean = " << mean << "\n\n";
}

void median(int *arr, int size) {
	double median;

	// Even number of elements
	if(size % 2 == 0) {
		median = (arr[size / 2] + arr[(size - 1) / 2]) / 2.0;
	}
	// Odd number of elements
	else {
		median = arr[size / 2];
	}
	cout << "Median = " << median << "\n\n";
}

void mode(int *arr, int size) {
	double median;
	int i, j, maxCount = 0, modeCount = 0, mode, count, k = 1;

	// Loop to iterate till second last element
	for(i = 0; i < (size - 1); i += count, k++) {
		count = 1;

		// Count occurrences of arr[i]
		for (j = i + 1; j < size; j++) {
			if (arr[i] == arr[j]) {
				count++;
			}
			else {
				break;
			}
		}

		// Histogram display
		cout << arr[i] << "\t" << count << "\t";
		for(j = 0; j < count; j++) {
			cout << "*";
		}
		cout << "\n";

		// If a new mode is discovered
		if ((count > maxCount) && (count != 0)) {
			mode = arr[i];
			maxCount = count;
			modeCount = 1;
		}
		// Same count as a previous mode
		else if (count == maxCount) {
			modeCount++;
		}
	}
	// Unique mode
	if(modeCount == 1) {
		cout << "Mode = " << mode << "\n\n";
	}
	// Multiple or no modes
	else {
		cout << "There is no mode\n\n";
	}
}

int main(int args, char *argv[]) {
	const int SIZE = 99;
	int arr[SIZE], n;

	// Read file
	n = readFile(arr);

	// Display mean
	mean(arr, n);

	// Print unsorted array
	cout << "Unsorted array :\n";
	print(arr, n);

	// Sort the array
	sort(arr, n);

	// Print sorted array
	cout << "Sorted array :\n";
	print(arr, n);

	// Display median
	median(arr, n);

	// Display mode
	mode(arr, n);
}