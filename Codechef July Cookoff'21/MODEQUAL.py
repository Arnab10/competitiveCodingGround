from collections import Counter
from math import floor


def solve():
    n = int(input())
    lst = list(map(int,input().split()))
    mini = min(lst)
    ref = 1
    mincount = lst.count(mini)
    for i in range(n):
        if(lst[i]!=mini):
            if(floor((lst[i]-1)/2)<mini):
                ref = 0
                break;
    print(n if ref == 0 else n-mincount)
def main():
    for _ in range(int(input())):
        solve()

if __name__ == "__main__":
    main()