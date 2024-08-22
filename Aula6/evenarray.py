def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    t = int(data[0])
    index = 1
    
    results = []
    
    for _ in range(t):
        n = int(data[index])
        array = list(map(int, data[index + 1: index + 1 + n]))
        index += 1 + n
        
        misplaced_even = 0
        misplaced_odd = 0
        
        for i in range(n):
            if i % 2 != array[i] % 2:
                if i % 2 == 0:
                    misplaced_even += 1
                else:
                    misplaced_odd += 1
        
        if misplaced_even == misplaced_odd:
            results.append(misplaced_even)
        else:
            results.append(-1)
    
    for result in results:
        print(result)

if __name__ == "__main__":
    main()