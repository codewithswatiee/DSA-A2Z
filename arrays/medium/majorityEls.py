def majEleBrute(arr):
    n = len(arr)
    isMajority = n // 2
    for i in range(len(arr)):
        cnt = 0
        for j in range(len(arr)):
            if arr[i] == arr[j]:
                cnt += 1
        if cnt > isMajority:
            return arr[i]
    return -1


resultBrute = majEleBrute([1, 2, 3, 1, 1, 1, 2])
print(resultBrute)


def majEleBetter(arr):
    hasmap = {}
    for i in arr:
        if i in hasmap:
            hasmap[i] += 1
        else:
            hasmap[i] = 1
    isMajority = len(arr) // 2
    for key, value in hasmap.items():
        if value > isMajority:
            return key
    return -1

resultBetter = majEleBetter([2, 2, 3, 1, 1, 1, 2])
print(resultBetter)



def majEleOptimal(arr):
    element = arr[0]
    count = 1
    for i in range(1, len(arr)):
        if arr[i] == element:
            count +=1
        else:
            count -= 1
            if count == 0:
                element = arr[i]
                count = 1
    isMajority = len(arr) // 2
    actual_count = 0
    for i in range(len(arr)):
        if arr[i] == element:
            actual_count += 1
    if actual_count > isMajority:
        return element
    return -1

resultOptimal = majEleOptimal([7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5])
print(resultOptimal)