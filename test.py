from collections import defaultdict

# Function to calculate the number of pairs of equal graphs
def count_equal_graphs(n, edges):
    graph_counts = defaultdict(int)
    equal_graph_pairs = 0

    for i in range(n):
        for j in range(i, n):
            subgraph = sorted(edges[i:j + 1])
            graph_counts[tuple(subgraph)] += 1

    for count in graph_counts.values():
        # Calculate the number of pairs for each unique graph representation
        equal_graph_pairs += (count * (count - 1)) // 2

    return equal_graph_pairs

# Main function
def main():
    T = int(input())
    for _ in range(T):
        n = int(input())
        edges = [tuple(map(int, input().split())) for _ in range(n)]
        result = count_equal_graphs(n, edges)
        print(result)

if __name__ == "__main__":
    main()
