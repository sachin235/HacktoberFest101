# Python implementation of QuickSort
def partition(array, low, high):
	pivot = array[high]
	i = low - 1
	for j in range(low, high):
		if array[j] <= pivot:
			i = i + 1
			(array[i], array[j]) = (array[j], array[i])

	(array[i + 1], array[high]) = (array[high], array[i + 1])

	return i + 1

def quicksort(array, low, high):
	if low < high:
		pi = partition(array, low, high)
		quicksort(array, low, pi - 1)
		quicksort(array, pi + 1, high)

array = []
n = int(input("Enter number of elements : "))
print("Enter element as one element in one row")
for i in range(0, n):
	element = int(input())
	array.append(element)

quicksort(array, 0, n - 1)
print('Sorted array:')
print(array)