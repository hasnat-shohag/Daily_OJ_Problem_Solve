t = int(input())

for _ in range(t):
    n = int(input())
    reports = list(map(int, input().split()))

    positions = list(range(1, n+1))
    isValid = True

    for i in range(n-1, -1, -1):
        if positions[i] > i:
            continue

        if positions[i] != reports[i]:
            isValid = False
            break

        positions[i], positions[i+1] = positions[i+1], positions[i]
        reports[i] -= 1

    if isValid:
        print("YES")
    else:
        print("NO")
