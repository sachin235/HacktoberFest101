def plusOne(self, A):
    n=len(A)
    if n<1:
        return [1]
    for i in range(n-1,-1,-1):
        if A[i] == 9:
            A[i]=0
        else:
            A[i]=A[i]+1
            break
    if A.count(0)==len(A): # if all values are 9 we made them 0,hence appending 1 at the front
        A[0]=1
        A.append(0)
    k=0
    for i in range(len(A)): # To ignore leading zeros
        if A[i]==0:
            k+=1
        else:
            break
    return A[k:]