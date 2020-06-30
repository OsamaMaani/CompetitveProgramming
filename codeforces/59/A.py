
line = input()
counterU = 0
counterL =0 
for x in line :
   if ord(x) < 97 :
      counterU +=1
   else :
      counterL +=1   
if counterL >= counterU :
      print(line.lower())
else :
      print(line.upper())      
