#https://leetcode.com/problems/unique-paths/submissions/

import math
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        m = m - 1
        n = n - 1
        return int(math.factorial(m+n)/(math.factorial(m)*math.factorial(n)))

def main():
    m,n = int(input()),int(input())
    
if __name__ == "__main__":
    main()