def solve():
    n = int(input())
    sushi = list(map(int, input().split()))
    
    segments = []
    current_type = sushi[0]
    current_length = 0
    
    for s in sushi:
        if s == current_type:
            current_length += 1
        else:
            segments.append(current_length)
            current_type = s
            current_length = 1
    segments.append(current_length)
    
    max_length = 0
    for i in range(1, len(segments)):
        max_length = max(max_length, 2 * min(segments[i-1], segments[i]))
    
    print(max_length)

def main():
    solve()

if __name__ == "__main__":
    main()