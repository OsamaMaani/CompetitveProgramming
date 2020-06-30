line = input()
limit = len(line)-1
counter =0 
for idx, x in enumerate(line):
    if idx == limit :
        if line[idx] != 'a' and line[idx] != 'e' and line[idx] != 'i' and line[idx] != 'o' and line[idx] != 'u' and line[idx] !='n' :
             counter +=1    
             break
    if x != 'a' and x != 'e' and x != 'i' and x != 'o' and x != 'u' and x!='n' :
        if line[idx+1] != 'a' and line[idx+1] != 'e' and line[idx+1] != 'i' and line[idx+1] != 'o' and line[idx+1] != 'u':
              counter += 1
if counter == 0 :
    print("YES")
else :
    print('NO')    