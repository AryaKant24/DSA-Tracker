SELECT user_id, 
CONCAT(
    UPPER(LEFT(name, 1)),
    SUBSTRING(name, 2)
) AS name
FROM users
ORDER BY user_id;