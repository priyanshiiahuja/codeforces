t = int(input())
S = set()
T = set()
for i in range(1, t + 1):
    n = int(input())
    k = input()
    for i in range(len(k)):
        if k[i] == '1':
            T.add(int(i+1))
    print(T)

# for i in range(1, t+1):
#     S.add(i)

# for i in range (t):
#     print(k)
    
    
