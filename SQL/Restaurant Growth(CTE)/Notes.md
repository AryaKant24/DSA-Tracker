# Notes

## Approach
Create temporary tables using cte
Use window functions to calculate rolling amounts
Use row numbers to start from row you want
1. First cte creates a table where we get the amount on each day
2. Second cte uses the first cte to do the following:
    1. Rolling sum over preceding 6 rows + current row
    2. Average it out
    3. Assign row numbers
3. Do this where row numbers>=7 since initially you dont get the window of 7
4. Use the second cte to display
## Mistakes

## Time Complexity

## Space Complexity

## Edge Cases