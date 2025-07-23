def minOperations( boxes):
        """
        :type boxes: str
        :rtype: List[int]
        """
        n = len(boxes)
        result = []
        for i in range(n):
            moves = 0
            for j in range(n):
                if(i == j): continue
                elif abs(i - j) == 1 and boxes[j] == '1':
                    moves += 1
                    print("adding 1")
                elif abs(i - j) > 0 and boxes[j] == '1':
                    print(f"i: {i}, j: {j}, boxes[j]: {boxes[j]} => {abs(i - j)}")
                    print("adding", abs(i - j), "moves", moves)
                    moves += abs(i - j)
            result.append(moves)
        return result

result = minOperations(boxes="001011") 
print(result)