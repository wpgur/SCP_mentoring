def fibonacci (n):
    
    if (n==0):
        global zero
        zero+=1
        return 0
    elif (n==1):
        global one
        one+=1
        return 1
    else:
        return fibonacci (n-1) + fibonacci (n-2)



num=int(input())
count=0
while(1):
    zero=0
    one=0
    if(num==count):
        break
    fibonacci(int(input()))
    print(zero,one)
    count+=1


'''
def fibonacci (n):
    a=[0,0]
    if (n==0):
        return 0
        a[0]+=1
    elif (n==1):
        return 1
        a[1]+=1
    else:
        return fibonacci (n-1) + fibonacci (n-2)
    print(a)

    


    

num=int(input())
count=0
while(1):
    
    if(num==count):
        break
    fibonacci(int(input()))
    
    count+=1

'''





'''
def fibonacci (n):
    
    if (n==0):
        zero+=1
        return 0
    elif (n==1):
        one+=1
        return 1
    else:
        return fibonacci (n-1) + fibonacci (n-2)

num=int(input())
count=0
while(1):
    zero=0
    one=0
    if(num==count):
        break
    print(fibonacci(int(input())))
    print(zero,one)
    count+=1
'''    
