x,y = list(map(int,input().split(" ")))
 
str = input()
while(y>0):
    str = str.replace("BG","GB")
    y = y-1
 
print(str)