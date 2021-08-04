import sys
from array import *
sys.setrecursionlimit(1000)

def init(arr,sum):
   global dp 
   dp = [[False for x in range(sum+1)] for y in range(len(arr)+1)]

def play(arr,sum,i,store):
    for i in range(len(arr) + 1):
        dp[i][0] = True
    for i in range(1, sum + 1):
         dp[0][i]= False
    for i in range(1,len(arr)+1):
        for j in range(1,sum+1):
            if j< arr[i-1]:
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = dp[i-1][j] or dp[i-1][j-arr[i-1]]
    print(dp)
    return dp [len(arr)][sum]

def main():
    arr = [3, 34, 4, 12, 5, 2]
    sum = int(input())
    i = 0
    store = []
    init(arr,sum)
    print(bool(play(arr,sum,i,store)))

if __name__ == "__main__":
    main()
