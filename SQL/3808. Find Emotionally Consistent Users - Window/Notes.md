# Notes

## Approach
1. Find the count of reactions made by all users on distinct posts which acts as the denominator
2. In second cte, GROUP BY user_id and reaction same as first cte
3. Use row number over user id and order by COUNT(*) DESC i.e. number of certain reactions
4. Find the ratio
5. Only display where row number is 1 and ratio greater than or equal to 0.6
## Mistakes
You have to use WITH only once while declaring cte
## Time Complexity

## Space Complexity

## Edge Cases