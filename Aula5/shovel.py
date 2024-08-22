import sys

def solve():
    k, r = map(int, input().strip().split())
    
    for i in range(1, 11):
        if (k * i) % 10 == 0 or (k * i) % 10 == r:
            print(i)
            break

def main():
    solve()

if __name__ == "__main__":
    main()