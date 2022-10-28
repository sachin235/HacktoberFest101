def bucketSort(arr, numberBuckets):
    max_e = max(arr)
    min_e = max(arr)
    range_buckets = (max_e - min_e) / numberBuckets
    temp = []

    for i in range(numberBuckets):
        temp.append([])

    for i in range(len(arr)):
        diff = (arr[i] - min_e) / range_buckets - int((arr[i] - min_e) / range_buckets)

        if(diff == 0 and arr[i] != min_e):
            temp[int((arr[i] - min_e) / range_buckets) - 1].append(arr[i])

        else:
            temp[int((arr[i] - min_e) / range_buckets)].append(arr[i])

    for i in range(len(temp)):
        if len(temp[i]) != 0:
            temp[i].sort()

    k = 0

    for last in temp:
        if last:
            for i in last:
                arr[k] = i
                k = k+1

arr = [9, 4, 1, 3, 10, 34, 87, 45, 22, 17]
numberBuckets = 5
bucketSort(arr, numberBuckets)
print(arr)