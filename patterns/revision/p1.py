n = int(input('Enter a number: '))


print("Pyramid Pattern")

for i in range(n): #O(n) time complexity
    times = 2*i +1  #takes 1 unit time
    space = n - i - 1 #takes 1 unit time
    print(' '*space + '*'*times + ' '*space) #takes 1 unit time


print("Inverted Pyramid Pattern")

for i in range(n): #O(n) time complexity
    times = 2* (n - i) - 1  #takes 1 unit time
    space = i
    print(' '*space + '*'*times + ' '*space) #takes 1 unit time

print("Diamond Pattern") #O(n) + O(n) time complexity ===>>> 2O(n) time complexity

for i in range(n): #O(n) time
    times = 2*i +1  #takes 1 unit time
    space = n - i - 1 #takes 1 unit time
    print(' '*space + '*'*times + ' '*space) #takes 1 unit time
for i in range(n - 1 , 0, -1): #O(n) time complexity
    times = 2*i - 1  #takes 1 unit time
    space = n-i
    print(' '*space + '*'*times + ' '*space) #takes 1 unit time


print("Number Pyramid Pattern")
