WITH DailySpending AS
(
    SELECT visited_on, SUM(amount) AS daily_amt FROM Customer GROUP BY visited_on
),

Stats AS(
    SELECT visited_on, 
    SUM(daily_amt) OVER (ORDER BY visited_on ROWS BETWEEN 6 PRECEDING AND CURRENT ROW) AS amt,
    ROUND(AVG(daily_amt) OVER(ORDER BY visited_on ROWS BETWEEN 6 PRECEDING AND CURRENT ROW), 2) as avg_amt,
    ROW_NUMBER() OVER (ORDER BY visited_on) as rn
    FROM DailySpending 
)

SELECT visited_on, amt AS amount, avg_amt AS average_amount
FROM Stats 
WHERE rn>=7
ORDER BY visited_on;