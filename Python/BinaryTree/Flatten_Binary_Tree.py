class BT:
    
    def __init__ (self,data):
        self.data=data
        self.left=None
        self.right=None
    

def flat(root):
    
    if(root.left==None and root.right==None or root==None):
        return
    
    while(root.left!=None):
        
        flat(root.left)
        
        temp=root.right
        root.right=root.left #shifting left elements to right
        root.left=None
        
        d=root.right
        while(d.right!=None): #searching the right node to insert the stored variable temp
            d=d.right
        
        d.right=temp;
    flat(root.right)

def inorder(root): #inorder of the binary tree
    
    if(root==None):
        return 
    inorder(root.left)
    print(root.data,end=" ")
    inorder(root.right)

p=BT(1)
p.right=BT(2)
p.left=BT(3)
p.right.left=BT(4)
p.right.right=BT(5)
p.left.right=BT(6)
p.left.left=BT(7)


flat(p)
inorder(p)


