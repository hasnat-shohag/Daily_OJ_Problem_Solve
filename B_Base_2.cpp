// python

n = 64
total_sum = 0

input_string = input()
A = input_string.split()  # Split the input string by whitespace


for i in range(n):
  p = int(A[i])
  a = p * (2 ** i)
  total_sum += a

print(total_sum)
