**Link to the Problem:** https://codingcompetitions.withgoogle.com/kickstart/round/00000000008cb2e1/0000000000c174f2

**Description:**
John participates in an annual walking competition called Walktober. The competition runs for a total of `N` days and tracks the daily steps of the participants for all the `N` days. Each participant will be assigned a unique ID ranging from 1 to `M` where `M` is the total number of registered participants. A global scoreboard is maintained tracking the daily steps of each participant.

John is determined to win Walktober this year and his goal is to score the maximum daily steps on each of the `N` days among all the participants. Having participated in Walktober last year as well, he wanted to know how many steps he fell short of in achieving his goal. Given the previous year scoreboard, calculate the minimum additional steps he needed over his last year score in order to achieve his goal of scoring the maximum daily steps every day.



**Input Format:**
The first line of the input gives the number of test cases, `T`. `T` test cases follow.
The first line of each test case contains three integers `M`, `N`, and `P` denoting the total number of participants, the total number of days the competition runs, and the last year participant ID of John.
The next `M` lines describe the scoreboard of the previous year and contains `N` integers each. The `j-th` integer of the `i-th` line denotes the step count `Si`,`j` of the participant with ID `i` on the `j-th` day of the competition.


**Constraints:**
- 1≤T≤100.
- 1≤N≤31.
- 1≤Si,j≤60000 for all i and j.
- 1≤P≤M.

**Output Format:**
For each test case, output one line containing `Case #x: y`, where x is the test case number (starting from 1) and y is the minimum total additional steps needed by John to achieve his goal.

**Test Case 1**
**Sample Input:**
> 1
2 3 1
1000 2000 3000
1500 1500 3000


**Sample Output:**
> Case #1: 500

**Explanation of Test Case 1**
The data can be visualised like this 

Player Id | Day 1 | Day 2 | Day 3
----------------------------------
    1     | 1000  | 2000  | 3000
    2     | 1500  | 1500  | 3000

Based on the table we need our player John with ID 1 to have the highest daily steps 
hence it is 
> (1500 - 1000) + (2000 - 2000) + (3000 - 3000) = 500


