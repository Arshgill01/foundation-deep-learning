import math
A = 1
result = 1

n = int(input())
if 1 <= n <= 2 * 10**5:
  for _ in range(0,n):
    a = int(input("base"))
    b = int(input("exponent"))
    
    for i in range(0,b):
      A = A + (a % (10**9 + 7))
      
      result += A * a
      
  print(result)
      
      
    
  


  
  

  