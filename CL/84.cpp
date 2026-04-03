Intuition

For every bar in the histogram, I try to consider it as the height of a rectangle and then expand it as much as possible to the left and right.

But instead of checking every possible expansion (which would be slow), I find:

the first smaller element on the left
the first smaller element on the right

These two boundaries tell me the maximum width I can take for that bar.

Approach

First, I compute the next smaller element for every index by traversing from right to left using a stack. The stack helps me keep track of indices in increasing order. If no smaller element exists on the right, I store -1.

Then, I compute the previous smaller element by traversing from left to right using the same idea.

Now for each index i:

height = heights[i]
if next smaller doesn’t exist, I treat it as n
width = next[i] - prev[i] - 1

Finally, I calculate the area for each bar and keep track of the maximum.

Complexity

Time Complexity:
O(n), since each element is pushed and popped from the stack at most once.

Space Complexity:
O(n), for storing the stack and the two arrays (next and prev).