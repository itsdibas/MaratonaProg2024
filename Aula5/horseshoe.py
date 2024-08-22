def main():

    s1, s2, s3, s4 = map(int, input().split())
    
    unique_colors = {s1, s2, s3, s4}
    
    horseshoes_to_buy = 4 - len(unique_colors)

    print(horseshoes_to_buy)

if __name__ == "__main__":
    main()