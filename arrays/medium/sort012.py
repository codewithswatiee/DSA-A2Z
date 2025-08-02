# Brute force solution to sort an array containing only 0s, 1s, and 2s using merge sort.

def mergeSort012(arr):
    if len(arr) <= 1:
        return arr
    
    mid = len(arr) // 2
    left_half = mergeSort012(arr[:mid])
    right_half = mergeSort012(arr[mid:])
    return merge(left_half, right_half)


def merge(left, right):
    sorted_array = []
    i = j = 0
    
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            sorted_array.append(left[i])
            i += 1
        else:
            sorted_array.append(right[j])
            j += 1
            
    while i < len(left):
        sorted_array.append(left[i])
        i += 1
        
    while j < len(right):
        sorted_array.append(right[j])
        j += 1
        
    return sorted_array


result = mergeSort012([0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 1])
print(result) 



# Better Solution: Keeping Counts of 0s, 1s, and 2s.
def betterSort012(arr):
    count0 = 0
    count1 = 0
    count2 = 0
    for i in arr:
        if i == 0: count0 += 1
        elif i == 1: count1 += 1
        elif i == 2: count2 += 1
    
    for i in range(count0): arr[i] = 0
    for i in range(count0, count0+count1): arr[i] = 1
    for i in range(count0+count1, len(arr)): arr[i] = 2
    return arr


resultBetter = betterSort012([0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 1])
print(resultBetter)


def swap(arr, i, j):
    arr[i], arr[j] = arr[j], arr[i]

# Optimized Solution: Dutch National Flag Problem
def sort012(arr):
    low, mid, high = 0, 0, len(arr) - 1
    while mid <= high:
        if arr[mid] == 0:
            swap(arr, low, mid)
            low += 1
            mid += 1
        elif arr[mid] == 1:
            mid += 1
        elif arr[mid] == 2:
            swap(arr, mid, high)
            high -= 1
    return arr

resultOptimized = sort012([0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 1])
print(resultOptimized)

        
