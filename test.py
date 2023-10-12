MOD = 10**9 + 7

def count_unrooted_unlabeled_trees(N):
    if N <= 2:
        return 1

    result = 1
    for i in range(2, N):
        result = (result * i) % MOD

    return result

# Input
N = int(input())
# Calculate and print the result
print(count_unrooted_unlabeled_trees(N))
