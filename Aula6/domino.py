def main():
    # Read the input values for M and N
    M, N = map(int, input().split())
    
    # Calculate the total number of squares
    total_squares = M * N
    
    # Calculate the maximum number of dominoes
    max_dominoes = total_squares // 2
    
    # Print the result
    print(max_dominoes)

if __name__ == "__main__":
    main()