#Brute force method:


def twoSumBrute(arr, target):
    for i in range(len(arr)):
        for j in range(len(arr)):
            if(arr[i] + arr[j]) == target:
                return f"True, indices are {i} and {j}"
    return "False"

def twoSumBetter(arr, target):
    for i in range(len(arr)):
        for j in range(i+1, len(arr)):
            if(arr[i] + arr[j]) == target:
                return f"True, indices are {i} and {j}"
    return "False"


def optimizedTwoSum(arr, target):
    hashmap = {}
    for i, num in enumerate(arr):
        print(f"Current number: {num}, Index: {i}")
        complement = target - num
        if complement in hashmap:
            return f"True, indices are {hashmap[complement]} and {i}"
        hashmap[num] = i
    return "False"




result = twoSumBrute([2, 7, 11, 15], 13)  
print(result) 


resultBetter = twoSumBetter([2, 7, 11, 15], 17)  
print(resultBetter) 

resultOptimized = optimizedTwoSum([2, 7, 11, 15], 13)
print(resultOptimized)