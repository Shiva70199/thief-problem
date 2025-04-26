def maxvalue(house):
    n=len(house)
    if n==0:
        return 0
    if  n==1:
        return house[0]
    dp=[0]*n
    dp[0]=house[0]
    dp[1]=max(house[0],house[1])
    for i in range(2,n):
        dp[i]=max(dp[i-1],dp[i-2]+house[i])
    return dp[-1]
house=[6, 7, 1, 3, 8, 2, 5]
print("Maximum stolen value:", maxvalue(house))