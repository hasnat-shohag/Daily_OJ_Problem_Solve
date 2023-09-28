from collections import Counter

# Define the set of colors
colors = {"blue", "green", "yellow", "red", "purple", "orange", "pink", "grey", "cyan", "brown", "ash", "silver", "gold", "white", "black"}

# Function to check if a color can be formed from characters in the string
def can_form_color(color, char_count):
    for char in color:
        if char in char_count and char_count[char] > 0:
            char_count[char] -= 1
        else:
            return False
    return True

# Function to find the maximum possible size of the desired subset
def find_max_subset(S):
    char_count = Counter(S)
    max_size = 0
    for color in colors:
        if can_form_color(color, char_count.copy()):
            max_size += 1
    return max_size

# Input the number of test cases
t = int(input())
for _ in range(t):
    S = input()
    max_subset_size = find_max_subset(S)
    print(max_subset_size)
