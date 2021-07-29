from collections import Counter

def solve():
    n = int(input())
    lst = list(map(int,input().split()))
    count = 0
    hist = Counter(lst)
    for x in set(hist) :
        count += min(x-1,hist[x])
    print(count)
def main():
    for _ in range(int(input())):
        solve()

if __name__ == "__main__":
    main()