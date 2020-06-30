line = list(map(int, input().split()))
limak = line[0]
bob = line[1]
counter =0
while (limak <=bob) :
    counter +=1
    limak *=3
    bob *=2
print(counter)    