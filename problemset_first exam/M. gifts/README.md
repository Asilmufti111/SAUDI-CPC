# Problem M. Gifts
Input file: fair.in  
Output file: standard output  
Balloon Color: Cyan  
Jack and Greg are brothers, Their father Mark gave each of them N presents.  
The price of the gifts Jack received are given to you as a1,a2,...,an and The price of the gifts Greg received
are given to you as b1,b2,...,bn.  
Now Mark wants to know if he is a fair father or not, he will be fair if the sum of prices of gifts of both
his children is the same.  
Can you help Mark and tell him if he is a fair father or not?.
## Input
The first line contains an integer N (1 ≤ N ≤ 100) the number of gifts each one got.  
Next line contains N integers separated by a single space a1,a2,...,an (1 ≤ ai ≤ 100). ai represent the
price of the i−th gift Jack received.  
Next line contains N integers separated by a single space b1,b2,...,bn (1 ≤ bi ≤ 100). bi represent the price
of the i−th gift Greg received.
## Output
print "fair"if the sum of prices of the gifts that Jack and Greg received is equal, and "not fair"otherwise.
### Examples
1. 
fair.in 
```
4
1 10 5 6
1 2 3 5
```
standard output  
`` not fair``

2.
fair.in 
```
2
4 2
3 3
```
standard output  
`` fair``