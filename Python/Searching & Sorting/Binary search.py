# Recursive implementation
def binarySearch(lst, left, right, x):
    if right >= left :
        mid = left + (right - left)//2

        if lst[mid] == x:
            return mid

        elif lst[mid] > x :
            return binarySearch(lst, left, mid-1, x)

        else:
            return binarySearch(lst, mid + 1, right, x)

    else:
        return -1

# we should provide a sorted array
lst = [2,5,6,8,14,34]
x= 14
index = binarySearch(lst, 0, len(lst)-1 , x)
if (index >= 0):
    print("Index of search element is :", index)
else:
    print("Not found in the array")

