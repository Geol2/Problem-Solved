while True:
    line = input().split()
    a = int(line[0])

    if a == 0:
        break;

    data = list(map(int, line[1:]))
    
    leaves = 1
    for i in range(a):
        splitting_factor = data[2*i]
        pruned = data[2*i + 1]
        
        leaves = leaves * splitting_factor - pruned
    
    print(leaves)