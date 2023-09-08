import math

def prime_factors_count(n, p):
    count = 0
    while n >= p:
        count += n // p
        n //= p
    return count

def max_power_divisor(n, k):
    max_i = float('inf')  # Initialize max_i to positive infinity
    
    # Factorize k and find the maximum power for each prime factor
    for p in range(2, int(math.sqrt(k)) + 1):
        if k % p == 0:
            power = 0
            while k % p == 0:
                k //= p
                power += 1
            count = prime_factors_count(n, p)
            max_i = min(max_i, count // power)
    
    if k > 1:
        count = prime_factors_count(n, k)
        max_i = min(max_i, count)
    
    return max_i

# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):  
    n, k = map(int, input().split())
    result = max_power_divisor(n, k)
    print(result)
