arr1=[]
n=int(input("enter the number"))
for i in range(n):
    data=int(input("enter the data"))
    arr1.append(data)
print(arr1)
a=sum(arr1)
print(a)
arr1.sort()
print(arr1)
t=0
for i in range(4):
    t+=arr1[n-1-i]
print(max(a,t))