#Python is a dynamically typed language
# Varialbes are dynamically typed

# MATHS
'''
print(5/2)          #2.5
print(5//2)         #2
print(-3//2)        #-2
print(int(-3/2))    #-1

print(10%3)             #1
print(-10%3)            #2

import math
print(math.fmod(-10,3)) #-1.0
print(math.floor(3/2))  #1
print(math.ceil(3/2))   #2
print(math.pow(3,2))    #9.0
'''

# Max / Min Int
t=float ("inf")
x=float ("-inf")
# Python numbers
import math
print(math.pow (2, 200))
print (math.pow (2, 200) < float ("inf"))

# Arrays (called lists in python)
arr = [1, 2, 3]
print (arr)
# Can be used as a stack
arr. append (4)
arr. append (5)
print(arr)

arr.pop ()
print(arr)
arr. insert(1, 7) #Insert is a O(N) Operation.
print (arr)
arr [0] = 0     # Constant Time Operation O(1)
arr[3] = 0      # Constant Time Operation O(1)
print (arr)

# Initialize arr of size n with default value of 1
of size n with default value of 1
n = 5
arr = [1] * n
print(arr)
print(len (arr))

# it's the last value.
arr = [1, 2, 3]
print(arr [-1])
# Indexing -2 is 2nd last value.
the second to last value, etc.
print (arr [-2])
