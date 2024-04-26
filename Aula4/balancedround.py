import sys

def main():
    t = int(input())
    for tcase in range(1, t + 1):
        n, k = map(int, input().split())
        a = list(map(int, input().split()))
        a.sort()
        ans = -1
        cnt = 1
        i = 1
        while i < n:
            if a[i] - a[i - 1] <= k:
                i += 1
                cnt += 1
            else:
                ans = max(ans, cnt)
                cnt = 1
                i += 1
        ans = max(cnt, ans)
        print(n - ans)

if __name__ == "__main__":
    main()
