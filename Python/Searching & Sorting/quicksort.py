def quick_sort(arr):
    if len(arr) <= 1:
        return arr
    else:
        pivot = arr[0]
        less = [x for x in arr[1:] if x <= pivot]
        greater = [x for x in arr[1:] if x > pivot]
        return quick_sort(less) + [pivot] + quick_sort(greater)

if __name__ == "__main__":
    arr = [5, 2, 9, 3, 6]
    sorted_arr = quick_sort(arr)
    print("Sorted Array:")
    print(sorted_arr)
