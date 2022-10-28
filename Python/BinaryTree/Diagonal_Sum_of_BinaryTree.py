from collections import deque

class BT:
    
    def __init__ (self,data):
        self.data=data
        self.left=None
        self.right=None
    

def diagonalsum(root):
    
    l=[]
    
    queue=[]
    
    sum1=0 #sum of diagonal
    count=0
    end=0
    
    while(root!=None):
        if(root.left!=None):  #left of queue
            queue.append(root.left)
            count+=1 
        
        sum1+=root.data
        root=root.right
        
        if(root==None): #move diagonally right
            
            if(len(queue)!=0):
                root=queue.pop(0)
            
            if(end==0):  #new diagonal sum
                l.append(sum1)
                sum1=0
                end=count
                count=0
            
            end-=1 
    
    return l

#creating the binary tree
p=BT(1)
p.right=BT(2)
p.left=BT(3)
p.right.left=BT(4)
p.right.right=BT(5)
p.left.right=BT(6)
p.left.left=BT(7)

d=diagonalsum(p)

#printing the diagonal sum
for i in d:
    print(i,end=" ")
