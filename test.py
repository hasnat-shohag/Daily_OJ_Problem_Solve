# 1 to n prjnto sob odd number er jogfol

number = int(input("Number"));

sum = 0;

for i in range(1, number+1):
    if (i % 2) != 0: # false 
        sum += i;

print(sum)