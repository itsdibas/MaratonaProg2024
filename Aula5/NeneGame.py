import sys
import math

def solve():
    k, q = map(int, sys.stdin.readline().split())
    kick = list(map(int, sys.stdin.readline().split()))
    player = list(map(int, sys.stdin.readline().split()))
    
    result = []
    for x in player:
        result.append(min(kick[0] - 1, x))
    
    print(" ".join(map(str, result)))

def main():
    t = int(sys.stdin.readline())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()