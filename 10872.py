def fac(a):
    if(a<=1):
        return 1
    else:
        return a*fac(a-1)
N=int(input())
print(fac(N))




'''
def fac(a):
    if(a==1):
        return 1
    else:
        return a*fac(a-1)
N=int(input())
print(fac(N))
'''

'''
print(fac(int(input())))
'''
