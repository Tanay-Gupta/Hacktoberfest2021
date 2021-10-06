def staircase(n):
    k=n-1
    for i in range(n):
        for i in range(k):
            print(" ",end="")
        
        for i in range(n-k):
            print("#",end="")
        print()
        k-=1
n=int(input("enter the height of staircase:"))
staircase(n)
