while True:
    inp = list(map(lambda x:int(x),input().split(' ')))
    if(inp==[0,0]):
        break
    A,D=inp[0],inp[1]
    print(A**D)
