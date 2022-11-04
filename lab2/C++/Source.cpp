#include <iostream>
#include <Windows.h>
#include <ctime>
#include "Sort.h"
#include "Sort.cpp"
using namespace::Sort;

	static void Sort::Show(const int arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

	static void Sort::SortBubble(int arr[], const int start_index, const int end_index) { 	//бульбашка
		for (int i = start_index; i < end_index; i++)
			for (int j = end_index; j > i; j--)
				if (arr[j] < arr[j - 1])
					std::swap(arr[j], arr[j - 1]);

	}


	static void Sort::SortInsertion(int arr[], const int start_index, const int end_index) //вставка
	{
		int i, j, key;
		for (i = start_index; i <= end_index; i++)
		{
			key = arr[i];
			j = i - 1;
			while (j >= start_index && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
	}

	static void Sort::SortSelection(int arr[], const int start_index, const int end_index) { //вибірка
		for (int i = start_index; i < end_index; i++)
			for (int j = i + 1; j < end_index + 1; j++)
				if (arr[j] < arr[i])
					Sort::swap(arr[j], arr[i]);
	}

	static void Sort::MinItem(int arr[], int size) {
		int minValue = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] < minValue) {
				minValue = arr[i];
			}
		}
		std::cout << "Element with a minimum value - " << minValue << std::endl;
	}

	static void Sort::MaxItem(int arr[], int size) {
		int maxValue = arr[0];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] > maxValue) {
				maxValue = arr[i];
			}
		}
		std::cout << "Element with a maximum value - " << maxValue << std::endl;
	}


	static void Sort::swap(int& a, int& b) {
		int temp = a;
		a = b;
		b = temp;
	}


void menu(int& key, int& start_index, int& end_index, int size);

int main(int argc, const char* argv[])
{
    int SIZE;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> SIZE;
    int* arr = new int[SIZE];
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Enter the elements of the array " << i << " - ";
        std::cin >> *(arr + i);
    }
    std::cout << "======================\n";
    std::cout << "Unsorted array:\n";
	Show(arr, SIZE);
    std::cout << "======================\n";
	int key, start_index, end_index;
    menu(key, start_index, end_index, SIZE);
    switch (key) {
    case 1:
        SortBubble(arr, start_index, end_index);
        break;
    case 2:
        SortInsertion(arr, start_index, end_index);
        break;
    case 3:
        SortSelection(arr, start_index, end_index);
        break;
    }
    std::cout << "Sorted array:\n";
    Show(arr, SIZE);
    std::cout << "======================\n";
    MinItem(arr, SIZE);
    MaxItem(arr, SIZE);

	return 0;
}

void menu(int& key, int& start_index, int& end_index, int size) {
    std::cout << "Select a sorting algorithm:\n"; 
    std::cout << "1) Bubble sort\n";
    std::cout << "2) Insertion sort\n";
    std::cout << "3) Selection sort\n";
    std::cout << "======================\n";
    std::cin >> key;
    switch (key) {
    case 1:
    case 2:
    case 3:
        break;
    default:
        std::cout << "You have selected a non-existent position, try again!\n";
        return menu(key, start_index, end_index, size);
    }

    std::cout << "Enter from which index of the array you want to sort the array(0-" << size-1 << "): ";
    std::cin >> start_index >> end_index;

    if (start_index > end_index)
        swap(start_index, end_index);

    if (start_index < 0 || start_index > size - 1) {
        start_index = 0;
        std::cout << "Ви ввели неправильний індекс, нумерація індексів масиву починається з 0" << std::endl;
    }

    if (end_index > size) {
        end_index = size - 1;
        std::cout << "Ви ввели неправильний індекс, останній індекс масиву - " << size - 1 << std::endl;
    }

}


