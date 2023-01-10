### Difference of N^2 and NlogN
Suppose: n  = 10^5
            = 10^5^2
            = 10^10 / 10^9 (Computer Instruction)
            = 10s


Suppose: n  = 10^5
            = 10^5 x 20
            = 2 x 10^6 / 10^8
            = 1s

### Merge Sort (o(nlogn));
    - Merge Recursive Algorithm.
    Base Case:
    - [ ] = [ ]
    - [a] = [a]

    Array Two Divide and Marge Array:
    Example: Give two sorted array a and b; Return C marge sort O(n)
    a = [1, 3, 5] ,  b = [2, 7, 8]
    c = [1, 2, 3, 5, 7, 8]

    merge Sort:
    Mearge_sort(a)
    Check 0 or 1 Base
    else: size(a)> 2
    Then Divided the array [Best]
                    [5, 3, 2, 7, 1]
                [5, 3]          [2, 7, 1]
            [5]       [3]       [2]     [7, 1]
                                        [7]    [1]
    Best Case 0 or 1

    Two Sorted Array Marge Sort:
    a = [2, 5, 7, 8]
    b = [1, 2, 3, 6, 9]
    Each Index check a or b less than another index.
    c = [1, 2, 2, 3, 5, 6, 7, 8, 9]

    We check a.size() + b.size()

    Merge Sort Complexity:
    Divide and Conquer Algorithm.
    Max Level o(n)
    Max Work O(log2(n))
    O(NlogN)




### Quick Sort (NlogN)
    Recursive Quick Sort;
    [1, 5, 3, 7, 2, 8, 9]
    Choose Randomly Value;
    pick = 7
    if(7<n)
        Right
    else(7>n)
        left
    [1, 5, 3, 2]            [8, 9]
    pick 3                  pick 8
    same condition:         same condition
    [1, 2] [5]                      [9]
    pick


