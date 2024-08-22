def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    
    results = []
    
    for _ in range(t):
        n = int(data[index])
        m = int(data[index + 1])
        a = data[index + 2]
        b = data[index + 3]
        index += 4
        
        max_k = 0
        j = 0
        
        for i in range(n):
            while j < m and b[j] != a[i]:
                j += 1
            if j < m and b[j] == a[i]:
                max_k += 1
                j += 1
            else:
                break
        
        results.append(max_k)
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()