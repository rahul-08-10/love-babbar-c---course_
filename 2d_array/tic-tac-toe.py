import numpy as np
import random
a=np.array([[0,0,0],[0,0,0],[0,0,0]])
print(a[0], "|", a[1], "|", a[2])
print("---|----|---")
print(a[3],"|" ,a[4], "|", a[5])
print("---|---|---")
print(a[6], "|" ,a[7] ,"|", a[8] )

def row():
    if(a[0][0]==a[0][1]==a[0][2] or a[1][1]==a[1][2]==a[1][3]  or a[2][1]==a[2][2]==a[2][3] ):
        return True
def column():
    if(a[0][0]==a[1][0]==a[1][0] or a[1][1]==a[2][2]==a[1][3]  or a[2][1]==a[2][2]==a[2][3]):
        return True
def dia():
