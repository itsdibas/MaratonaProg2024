def solve():
    n = int(input())
    n = 2 * n
    v = list(map(int, input().split()))
    ans = 0
    v.sort()
    for i in range(1, n, 2):
        ans += min(v[i], v[i - 1])
    print(ans)

if __name__ == "__main__":
    TC = int(input())
    for _ in range(TC):
        solve()
