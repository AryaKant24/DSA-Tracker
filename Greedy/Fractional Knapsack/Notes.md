# Notes
Learnt a new way to sort a 2D array based on the 2nd index.
sort(boxTypes.begin(), boxTypes.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] > b[1];
             });
Lambda function
"Compare two elements a and b, and put a before b if a[1] is greater than b[1]."
## Approach
I knew the maximum capacity in terms of boxes.
We needed maximum units.
Sorted the 2D array in descending order by number of units.
Started filling the truck.
## Mistakes
Might overcomplicate it. Identify the pattern
## Time Complexity
O(N)
## Space Complexity
O(1)
## Edge Cases