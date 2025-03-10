#!/bin/python3

import math
import os
import random
import re
import sys


#
# Complete the 'getMinimumDifference' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. STRING_ARRAY a
#  2. STRING_ARRAY b
#
from collections import Counter

def getMinimumDifference(a, b):
    results = []
    for s1, s2 in zip(a, b):
        if len(s1) != len(s2):
            results.append(-1)
            continue
        
        
        count1 = Counter(s1)
        count2 = Counter(s2)
        
        
        changes = 0
        for char in set(count1.keys()).union(set(count2.keys())):
            changes += abs(count1.get(char, 0) - count2.get(char, 0))
             
        results.append(changes)
        
    
    return results
                
                
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a_count = int(input().strip())

    a = []

    for _ in range(a_count):
        a_item = input()
        a.append(a_item)

    b_count = int(input().strip())

    b = []

    for _ in range(b_count):
        b_item = input()
        b.append(b_item)

    result = getMinimumDifference(a, b)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
