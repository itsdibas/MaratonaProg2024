def main():
    # Read the number of test cases
    t = int(input(""))
    
    for _ in range(t):
        # Read the two integers n and m for each test case
        n, m = map(int, input().split())
        
        if n < m:
            print("No")
        elif n > m:
            if (n - m) % 2 == 0:
                print("Yes")
            else:
                print("No")
        elif n == m:
            print("Yes")

if __name__ == "__main__":
    main()