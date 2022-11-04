#include <iostream>
#include <ctime>
#include <vector>
#include "Sort.h"



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
