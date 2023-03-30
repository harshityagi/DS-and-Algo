'''
git add .
git commit -m "message OR comment"
git push
'''

#121. Best Time to Buy and Sell Stock
#M:O(1) T:O(N)
def maxProfit(self, prices: List[int]) -> int:
        l,r=0,1 #left=buy, right=sell
        maxP=0
        while r<len(prices):
            #priftable
            if  prices[l]<prices[r]:
                profit=prices[r]-prices[l]
                maxP=max(maxP,profit)
            else:
                l=r
            r+=1
        return maxP

#3. Longest Substring Without Repeating Characters
#M:O(N) T:O(N)
def lengthOfLongestSubstring(self, s: str) -> int:
    charSet=set()
    l=0
    res=0
    for r in range(len(s)):
        while s[r] in charSet:
            charSet.remove(s[l])
            l+=1
        charSet.add(s[r])
        res=max(res,r-l+1)
    return res