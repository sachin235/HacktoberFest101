n =int(input())
t = list()
ls = list()
while(n!=0):
    t = input().split()
    if t[0] == 'insert':
        ls.insert(int(t[1]),int(t[2]))
    if t[0] == 'append':
        ls.append(int(t[1]))
    if t[0] == 'remove':
        ls.remove(int(t[1]))
    if t[0] == 'sort':
        ls.sort()
    if t[0] == 'pop':
        ls.pop()
    if t[0] == 'reverse':
        ls.reverse()
    if t[0] == 'print':
        print (ls)
    n-=1
