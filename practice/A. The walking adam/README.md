# Problem A. The Walking Adam
Input file: adam.in  
Output file: standard output  

Adam has just started learning how to walk (with some help from his brother Omar), and he falls down
a lot. In order to balance himself, he raises his hands up in the air (that’s a true story), and once he puts
his hands down, he falls.
You are given a string, each character represents a step he walks, if that character is ‘U’ that means his
hands are up in this step, if this character is ‘D’ that means his hands are down and he fell down in this
step. Your task is to count how many steps he will walk before falling down for the first time.
## Input
Your program will be tested on one or more test cases. The first line of the input will be a single integer
**T** representing the number of test cases.  
Each test case will consist of a single line, containing a non-empty string of at most 100 characters, and
each character is either ‘U’ or ‘D’. The characters from left to right represent Adam’s steps in the order
he walks them.
## Output
For each test case print a single line containing the number of steps that Adam will walk before falling
down, or the length of the string if he won’t fall down.
### Example
adam.in    
``` 
3  
UUUDU  
DDD  
UU  
```

standard output 
```
3  
0  
2  
``` 

### Note
In the first test case, he falls down after 3 steps.  
In the second test case, he falls down before making any steps.  
In the third test case, he doesn’t fall down at all.  