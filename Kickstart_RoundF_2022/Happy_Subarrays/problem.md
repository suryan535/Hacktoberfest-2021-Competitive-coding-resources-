**Link to the Problem:** https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb2e1/0000000000c17491

**Description:**
Let us define `F(B,L,R)` as the sum of a subarray of an array `B` bounded by indices `L` and `R` (both inclusive). Formally, `F(B,L,R)`=`BL+BL+1+⋯+BR`.

An array `C` of length `K` is called a happy array if all the prefix sums of `C` are non-negative. Formally, the terms `F(C,1,1),F(C,1,2),…,F(C,1,K)` are all non-negative.

Given an array `A` of `N` integers, find the result of adding the sums of all the happy subarrays in the array `A`.


**Input Format:**
The first line of the input gives the number of test cases, `T`. `T` test cases follow.
Each test case begins with one line consisting an integer `N` denoting the number of integers in the input array `A`. Then the next line contains `N` integers `A1,A2,…,AN` representing the integers in given input array `A`.


**Constraints:**
- 1≤T≤100.
- −800≤Ai≤800, for all i.

**Output Format:**
For each test case, output one line containing `Case #x: y`, where x is the test case number (starting from 1) and y is the result of adding the sums of all happy subarrays in the given input array `A`.

**Test Case 1**
**Sample Input:**
>2
5
1 -2 3 -2 4
3
1 0 3


**Sample Output:**
> Case #1: 14
Case #2: 12

**Explanation of Test Case 1**
> 1
1 -2
1 -2 3
1 -2 3 -2
1 -2 3 -2 4
-2
-2 3
-2 3 -2
-2 3 -2 4
3
3 -2
3 -2 4
-2
-2 4
4

These are all the possible subarrays and based on the formula in the question we can check what ll subarray satisfy the question








