import math
def sieve(n):
    a = [0]*(n+1)
    for i in range(n+1):
        a[i] = i
    for i in range(2,int(math.sqrt(n))):
        if(a[i]>0):
            for j in range(i*i,n+1,i):
                a[j]=-1
                
    return a    
n = int(input("Enter your limit"))
mass=sieve(n)
print("All prime numbers up to your limit")
for i in range(2,n+1):
    if(mass[i]>0):
        print("", i," ",end="")