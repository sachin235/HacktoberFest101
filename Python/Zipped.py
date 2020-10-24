n,x=map(int, input().split())
s = []
for i in range(x):
    s.append(map(float,input().split()))
#print (s)
for i in zip(*s): 
    print( sum(i)/len(i) )
