from array import array # import array class from array module
# define array of floats
a = array('f', [4,3,6,33,2,8,0])
 
# Normal looping
print("Normal looping")
for i in a:
    print(i)
 
# Loop with slicing
print("Loop with slicing")
for i in a[3:]:
    print(i)
 
# Loop with method enumerate()
print("loop with method enumerate() and slicing")
for i in enumerate(a[1::2]):
    print(i)