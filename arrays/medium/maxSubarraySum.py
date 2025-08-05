def maxSubSumBrute(arr):
    max_sum = float('-inf')
    for i in range(len(arr)):
        for j in range(i, len(arr)):
            current_sum = 0
            for k in range(i, j + 1):
                current_sum += arr[k]
            if current_sum > max_sum:
                max_sum = current_sum
    return max_sum


arr = [-2, -3, 4, -1, -2, 1, 5, -3]
resultBrute = maxSubSumBrute(arr)
print(resultBrute)


def maxSubSumBetter(arr):
    max_sum = float('-inf')
    for i in range(len(arr)):
        current_sum = 0
        # Instead of recalculating the sum for each subarray, we accumulate it
        for j in range(i, len(arr)):
            current_sum += arr[j]
            if current_sum > max_sum:
                max_sum = current_sum
    return max_sum

resultBetter = maxSubSumBetter(arr)
print(resultBetter)


def maxSubSumOptimal(arr):
    max_sum = float('-inf')
    current_sum = 0
    start = 0
    temp_start = 0
    end = 0

    for i in range(len(arr)):
        current_sum += arr[i]

        if current_sum > max_sum:
            max_sum = current_sum
            start = temp_start
            end = i

        if current_sum <= 0:
            current_sum = 0
            temp_start = i + 1

    return max_sum, arr[start:end + 1]


resultOptimal = maxSubSumOptimal(arr)
print(resultOptimal)