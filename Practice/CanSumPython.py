import sys
sys.setrecursionlimit(1000)

#Input a number and find all possible sets which adds up to the input number

def play(arr,sum,i,store):
    if(sum==0):
        print(store)
        return True
    elif(i == len(arr)):
        return False 
    store.append(arr[i])            #take 
    cs1  = play(arr,sum-arr[i],i+1,store)
    store.pop()                     #not take
    cs2 = play(arr,sum,i+1,store)
    return cs1 or cs2

def main():
    arr = [3, 34, 4, 12, 5, 2]
    sum = int(input())
    i = 0
    store = []
    print(bool(play(arr,sum,i,store)))
    
if __name__ == "__main__":
    main()
