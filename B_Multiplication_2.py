N = input()
 
numbers = list(map(int, input().split()))
 
if 0 in numbers:
  print(0)
  exit()
 
ans = 1
 
for i in numbers:
  ans = ans * i
  if(ans > 10**18):
    print(-1)
    exit()
 
print(ans)