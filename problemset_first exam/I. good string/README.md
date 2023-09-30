# Problem I. Good String
Input file: good.in  
Output file: standard output  
Balloon Color: Violet  
A string is called k − good if there exists some character that appears at least k consecutive times in that
string.  
Your task is to find if a given string S is a k − good string or not and if it is find the first character that
satisfies the condition.
## Input
The input consists of one line. You will be given string S consisting only of lowercase English letters
(1 ≤ |S| ≤ 103
) and an integer K (1 ≤ K ≤ 103
) separated by a space.
## Output
If the string is a k − good string print "YES" (without the quotes and case insensitive) and the first
character that satisfies the condition separated by a space.  
If not, print "NO" (without the quotes and case insensitive).
### Examples
1. 

good.in   
`` abcaa 5 ``
standard output  ``NO``

2. 
good.in   
`` helloo 2 ``
standard output  ``YES l``

3. 
good.in   
`` eefaa 2  ``
standard output  ``YES e``