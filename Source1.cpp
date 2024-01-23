#include <stdio.h>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include <Windows.h>
void bouble_sort(int *arr, int size){
	for (int i = 0; i != size; i++) {
		bool swapped = false;
		for (int k = 1; k != size; k++) {
			int buff = 0;
			if (arr[k - 1] > arr[k]) {
				buff = arr[k - 1];
				arr[k - 1] = arr[k];
				arr[k] = buff
				swapped = true

			}
		}
		if (!swapped) {
			break;
		}
}
}