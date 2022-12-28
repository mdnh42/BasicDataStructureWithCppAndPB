A - Weird Algorithm
Consider an algorithm that takes as input a positive integer nn. If nn is even, the algorithm divides it by two, and if nn is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until nn is one. For example, the sequence for n=3n=3 is as follows:
3 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of nn.

Input

The only input line contains an integer nn.

Output

Print a line that contains all values of nn during the algorithm.

Constraints
1 \le n \le 10^61≤n≤10 
6
 
Sample
Inputcopy	Outputcopy
3
3 10 5 16 8 4 2 1


B - Repetitions
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of nn characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1 \le n \le 10^61≤n≤10 
6
 
Sample
Inputcopy	Outputcopy
ATTCGGGA
3


C - Permutations

A permutation of integers 1,2,\ldots,n1,2,…,n is called beautiful if there are no adjacent elements whose difference is 11.

Given nn, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer nn.

Output

Print a beautiful permutation of integers 1,2,\ldots,n1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1 \le n \le 10^61≤n≤10 
6
 
Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION


D - Increasing Array
You are given an array of nn integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer nn: the size of the array.

Then, the second line contains nn integers x_1,x_2,\ldots,x_nx 
1
​
 ,x 
2
​
 ,…,x 
n
​
 : the contents of the array.

Output

Print the minimum number of moves.

Constraints
1 \le n \le 2 \cdot 10^51≤n≤2⋅10 
5
 
1 \le x_i \le 10^91≤x 
i
​
 ≤10 
9
 
Sample
Inputcopy	Outputcopy
5
3 2 5 1 7
5


E - Missing Number
You are given all numbers between 1,2,\ldots,n1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer nn.

The second line contains n-1n−1 numbers. Each number is distinct and between 11 and nn (inclusive).

Output

Print the missing number.

Constraints
2 \le n \le 2 \cdot 10^52≤n≤2⋅10 
5
 
Sample
Inputcopy	Outputcopy
5
2 3 1 5
4



F - QQ solver

You are given a 33-character string SS, which is a concatenation of integers aa and bb between 11 and 99 (inclusive) and the character x in this order: axb.

Find the product of aa and bb.

Constraints
The length of SS is 33.
The 11-st and 33-rd characters are digits between 11 and 99 (inclusive).
The 22-nd character is x.
Input
Input is given from Standard Input in the following format:

SS
Output
Print the answer.

Sample 1
Inputcopy	Outputcopy
3x7
21
We have 3 \times 7 = 213×7=21, which should be printed.

Sample 2
Inputcopy	Outputcopy
9x9
81
Sample 3
Inputcopy	Outputcopy
1x1
1




G - A Reverse
You are given integers LL, RR, and a string SS consisting of lowercase English letters.
Print this string after reversing (the order of) the LL-th through RR-th characters.

Constraints
SS consists of lowercase English letters.
1 \le |S| \le 10^51≤∣S∣≤10 
5
  (|S|∣S∣ is the length of SS.)
LL and RR are integers.
1 \le L \le R \le |S|1≤L≤R≤∣S∣
Input
Input is given from Standard Input in the following format:

LL RR
SS
Output
Print the specified string.

Sample 1
Inputcopy	Outputcopy
3 7
abcdefgh
abgfedch
After reversing the 33-rd through 77-th characters of abcdefgh, we have abgfedch.

Sample 2
Inputcopy	Outputcopy
1 7
reviver
reviver
The operation may result in the same string as the original.

Sample 3
Inputcopy	Outputcopy
4 13
merrychristmas
meramtsirhcyrs

H - Distinct Strings
Problem Statement
You are given a string SS of length 33 consisting of lowercase English letters.

How many different strings can be obtained by permuting the characters in SS?

Constraints
SS is a string SS of length 33 consisting of lowercase English letters.
Input
Input is given from Standard Input in the following format:

SS
Output
Print the number of different strings that can be obtained by permuting the characters in SS.

Sample 1
Inputcopy	Outputcopy
aba
3
By permuting the characters in S=S= aba, three different strings can be obtained: aab, aba, baa.

Sample 2
Inputcopy	Outputcopy
ccc
1
By permuting the characters in S=S= ccc, just one string can be obtained: ccc.

Sample 3
Inputcopy	Outputcopy
xyz
6
By permuting the characters in S=S= xyz, six different strings can be obtained: xyz, xzy, yxz, yzx, zxy, zyx.




I - Distinct Numbers


You are given a list of nn integers, and your task is to calculate the number of distinct values in the list.

Input

The first input line has an integer nn: the number of values.

The second line has nn integers x_1,x_2,\dots,x_nx 
1
​
 ,x 
2
​
 ,…,x 
n
​
 .

Output

Print one integers: the number of distinct values.

Constraints
1 \le n \le 2 \cdot 10^51≤n≤2⋅10 
5
 
1 \le x_i \le 10^91≤x 
i
​
 ≤10 
9
 
Sample
Inputcopy	Outputcopy
5
2 3 2 2 3
2