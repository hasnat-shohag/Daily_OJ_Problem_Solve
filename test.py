n = int(input())  # Read the number of integers

arr = [int(input()) for _ in range(n)]  # Read the array elements

dp = [1] * n  # Initialize dp array with 1, as each element is a valid sequence of length 1

for i in range(n - 2, -1, -1):
    if arr[i + 1] - arr[i] >= 2:
        dp[i] = dp[i + 1] + 1

for length in dp:
    print(length)
