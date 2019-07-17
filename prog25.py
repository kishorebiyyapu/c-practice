N=int(input())
a=list(map(int,input().split()[:N]))
a.sort()
if N%2==0:
    b=N//2
    print(a[b-1]+a[b])
else:
    b=N//2
    print(a[b])
