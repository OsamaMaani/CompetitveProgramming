#line = input()
line = list(map(int, input().split()))
#n, h = map(int, input().split()) 
#print(n,h)
a = list(map(int, input().split()))
ans = 0
for x in a:
    if x <= line[1]:
        ans += 1

    else:
        ans += 2

print(ans)
