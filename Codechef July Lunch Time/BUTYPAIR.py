from collections import Counter
import math

def solve():
    n = int(input())
    sum = 0
    lst = list(map(int,input().split()))
    listlen = len(lst)
    lst.sort()
    hist = dict(Counter(lst))
    for i in list(hist):
        if(hist[i]==1):
            hist.pop(i)
        else:
            hist[i] = hist[i]*(hist[i]-1)/2
            sum = sum + hist[i]
    print(int(2*((listlen*(listlen-1)/2)-sum)))


def main():
    for _ in range(int(input())):
        solve()

if __name__ == "__main__":
    main()
