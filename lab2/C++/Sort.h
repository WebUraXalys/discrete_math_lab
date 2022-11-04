#ifndef Sort_h
#define Sort_h
namespace Sort {
	void Show(const int arr[], int size);
	void SortBubble(int arr[], const int start_index, const int end_index);
	void SortInsertion(int arr[], const int start_index, const int end_index);
	void SortSelection(int arr[], const int start_index, const int end_index);
	void MinItem(int arr[], int size);
	void MaxItem(int arr[], int size);
	void swap(int& a, int& b);
}
#endif /* Sort_h */
