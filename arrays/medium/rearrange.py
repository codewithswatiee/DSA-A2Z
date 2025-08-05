def rearrangeBrute(arr):
    pos, neg = [], []
    for i in range(len(arr)):
        if arr[i] > 0:
            pos.append(arr[i])
        else:
            neg.append(arr[i])
    for i in range(len(pos)):
        arr[i * 2] = pos[i]
    for i in range(len(neg)):
        arr[i * 2 + 1] = neg[i]
    return arr

arr = [1, -2, 3, -4, 5, -6]
resultBrute = rearrangeBrute(arr)
print(resultBrute)

def rearrangeOptimal(arr):
    pos_inx = 0
    neg_index = 1
    result =[0] * len(arr)
    i = 0
    while i < len(arr):
        if arr[i] > 0: 
            result[pos_inx] = arr[i]
            pos_inx += 2
            i+= 1
        else:
            result[neg_index] = arr[i]
            neg_index += 2
            i += 1
    return result

resultOptimal = rearrangeOptimal([1, -2, 3, -4, 5, -6])
print(resultOptimal)


def v2Rearrange(arr):
    pos = []
    neg = []
    i = 0
    for i in range(len(arr)):
        if arr[i] > 0:
            pos.append(arr[i])
        else:
            neg.append(arr[i])
    print(f'Positive: {pos}, Negative: {neg}')
    min_len = min(len(pos), len(neg))
    for i in range(min_len):
        arr[i * 2] = pos[i]
    for i in range(min_len):
        arr[i * 2 + 1] = neg[i]
    print(arr)
    if len(pos) > len(neg):
        arr[min_len * 2:] = pos[min_len:]
    else:
        arr[min_len * 2:] = neg[min_len:]
    return arr

resultOptimal = v2Rearrange([1, 2, 3, -4, 5, -6])
print(resultOptimal)     