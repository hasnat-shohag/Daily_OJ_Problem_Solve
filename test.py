def max_frogs_caught(n, hops):
    max_hop = max(hops)
    max_count = hops.count(max_hop)
    return min(n, max_hop, max_count)

# Read the number of test cases
t = int(input())

for _ in range(t):
    # Read input for each test case
    n = int(input())
    hop_lengths = list(map(int, input().split()))

    # Calculate and print the maximum number of frogs caught using a trap
    result = max_frogs_caught(n, hop_lengths)
    print(result)
