WITH cte AS(
    SELECT a.product_id AS product1_id, b.product_id AS product2_id, 
    COUNT(DISTINCT a.user_id) AS customer_count
    FROM ProductPurchases a
    JOIN ProductPurchases b
    ON a.user_id=b.user_id AND a.product_id<b.product_id 
    GROUP BY a.product_id, b.product_id
    HAVING COUNT(DISTINCT a.user_id)>=3
)

SELECY x.product1_id, x.product2_id, y1.category, y2.category, x.customer_count
FROM cte x
JOIN ProductInfo y1 ON
x.product1_id = y1.product_id
JOIN ProductInfo y2 ON
x.product2_id = y2.product_id
ORDER BY customer_count DESC, product1_id, product2_id;

