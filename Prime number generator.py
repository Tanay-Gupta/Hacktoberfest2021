n=int(input("Enter a number:"))
if n<=2:
    if n==2:
        print(n)
else:
    print(2)
    j=2
    for i in range(3,n+1):
        for j in range(2,i//2):
            if i%j==0:
                break
        if i%j!=0:
            print(i)
