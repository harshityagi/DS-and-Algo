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
