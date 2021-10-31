##Too costly, Timed out

class Solution:
    def reversePairs(self, nums) -> int:
        count = 0
        for i in reversed(range(len(nums))):
            for j in reversed(range(len(nums)-1)):
                if (2*nums[i]<nums[j]):
                    count = count + 1
        return count

def main():
    lst = [ i for i in int(input())]
    s = Solution()
    s.reversePairs(lst)
    
if __name__ == "__main__":
    main()