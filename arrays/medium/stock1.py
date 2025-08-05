def maxProfit(prices):
    max_profit = 0
    mini = prices[0]
    for i in range(1, len(prices)):
        cost = prices[i] - mini
        max_profit = max(max_profit, cost)
        mini = min(mini, prices[i])
    return mini, max_profit


result = maxProfit([7, 1, 5, 3, 6, 4])
print(result)