MOD = 10**9 + 7

def countRobots(M, N):
    dp = [[0] * (N + 1) for _ in range(M + 1)]
    
    # Initialize dp[0][j] to 1 for all j
    for j in range(1, N + 1):
        dp[0][j] = 1

    for i in range(1, M + 1):
        for j in range(1, N + 1):
            for k in range(1, N + 1):
                if abs(j - k) <= 2:
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD

    # Sum up dp[M][j] for all j to get the total count
    total_count = sum(dp[M]) % MOD

    return total_count

# Read input and process test cases
T = int(input())
for _ in range(T):
    M, N = map(int, input().split())
    result = countRobots(M, N)
    print(result)
