# Program to display the Fibonacci sequence up to n-th term

num = int(input("How many terms? "))

# first two terms
n1, n2 = 0, 1
count = 0

# check if the number of terms is valid
if num <= 0:
   print("Please enter a positive integer")
elif num == 1:
   print("Fibonacci sequence upto",num,":")
   print(n1)
else:
   print("Fibonacci sequence:")
   while count < num:
       print(n1)
       nth = n1 + n2
       # update values
       n1 = n2
       n2 = nth
       count += 1