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


# Max / Min Int
float ("inf")
float ("-inf")
# Python numbers
import math
print(math.pow (2, 200)) #1.6069380442589903e+60
print (math.pow (2, 200) < float ("inf")) #True

# Arrays (called lists in python)
arr = [1, 2, 3]
print (arr) #[1, 2, 3]
# Can be used as a stack
arr. append (4) 
arr. append (5)
print(arr)          #[1, 2, 3, 4, 5]
arr.pop ()
print(arr)          #[1, 2, 3, 4]

arr. insert(1, 7)   #Insert is a O(N) Operation.
print (arr)         #[1, 7, 2, 3, 4]

arr [0] = 0         # Constant Time Operation O(1)
arr[3] = 0          # Constant Time Operation O(1)
print (arr)         #[0, 7, 2, 0, 4]

# Initialize arr of size n with default value of 1
n = 5
arr = [1] * n
print(arr)          #[1, 1, 1, 1, 1]
print(len (arr))    #5

# it's the last value.
arr = [1, 2, 3]
print(arr [-1])     #3
# Indexing -2 is 2nd last value.
print (arr [-2])    #3

# Sublists/ Slicing
arr = [1,2,3,4]
print(arr[1:3])
print(arr[0:4])

#Unpacking
a,b,c=[1,2,3]
print(a,b,c) # 1 2 3

# Loop through arrays
nums = [1, 2, 3]
# Using index
for i in range(len (nums) ):
    print (nums [i])
# Without index
for n in nums:
    print (n)
# With index and value
for i, n in enumerate (nums) :
    print(i, n)

# Loop through multiple arrays simultaneously
# with unpacking
nums1 = [1, 3, 5]
nums2 = [2,4,6]
for n1, n2 in zip (nums1, nums2):
    print (n1, n2)

# Sorting
arr = [5,4,7,3,8]
arr.sort()
print(arr) #[3, 4, 5, 7, 8]

arr.sort(reverse=True)
print(arr) #[8, 7, 5, 4, 3]
'''
# Sorting List of Strings
arr = ["bob","alice","jane","doe"]
arr.sort()
brr = arr
print(arr)
print(brr)