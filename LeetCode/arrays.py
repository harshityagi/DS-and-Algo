#--------- GFG ---------
#Largest Element in an Array
def largestElement(self, nums: List[int]) -> List[int]:
    
    while()

#1920. Build Array from Permutation
#M:O(1) T:O(N)
def buildArray(self, nums: List[int]) -> List[int]:
        '''M:O(N) T:O(N)
        res=[]
        for i in range(len(nums)):
            resVal=nums[nums[i]]
            res.append(resVal)
        return res'''
        q = len(nums)
        # turn the array into a=qb+r
        for i in range(len(nums)):
            r = nums[i]
            
            # retrieve correct value from potentially already processed element
            # i.e. get r from something maybe already in the form a = qb + r
            # if it isnt already processed (doesnt have qb yet), that's ok b/c
            # r < q, so r % q will return the same value
            b = nums[nums[i]] % q
            
            # put it all together
            nums[i] = q*b + r
            
        # extract just the final b values
        for i in range(len(nums)):
            nums[i] = nums[i] // q
        return nums


#1. Two Sum
#M:O(N) T:O(N)
def twoSum(self, nums: List[int], target: int) -> List[int]:
    prevMap={} # val:index
    for i, n in enumerate(nums):
        diff=target-n 
        if diff in prevMap:
            return [prevMap[diff], i]
        prevMap[n]=i
