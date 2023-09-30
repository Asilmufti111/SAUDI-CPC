# Problem C. Self Describing Numbers
Input file: self.in  
Output file: standard output  
In one of the classes, Dr. Edsger explained that an integer is said to be "self-describing"if it has the
property that: the first digit represents the number of zeros in the integer; the second digit represents the
number of ones in the integer, and so on.
For example, 1210 is a self-describing integer since:  
- the first digit is 1 and there is 1 zero in the number &
- the second digit is 2 and there are 2 ones in the number &
- the third digit is 1 and there is 1 two in the number &
- the fourth digit is 0 and there are 0 threes in the number.  
At the end of the class, Dr. Edsger gave a small homework: create a program to check whether an integer
is self-describing or not.
## Input
The first line of the input contains an integer **T**, the number of test cases.
Each test case consists of a single integer **N** (0 ≤ N < 1010), without leading zeros.
## Output
For each test case, print a single line containing the answer which is either "self-describing"or "not self-describing"without the quotes.  

### Example
self.in  
``` 
2
1210
2017
``` 
standard output
```
self-describing
not self-describing
```