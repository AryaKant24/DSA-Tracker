-- finds the number of reactions on distinct posts
WITH base AS (
    SELECT user_id, COUNT(reaction) AS den
FROM reactions
GROUP BY user_id
HAVING COUNT(DISTINCT content_id)>=5
), 

-- find the most frequently occuring reaction
maxNum as (
    SELECT user_id, reaction, COUNT(*) AS reaction_count,
ROW_NUMBER() OVER (PARTITION BY user_id ORDER BY COUNT(*) DESC) AS num
FROM reactions
GROUP BY user_id, reaction
)

-- divide the MFOR by the number of reactions. Display if this ratio is greater than 0.6
SELECT a.user_id, b.reaction AS dominant_reaction, ROUND((b.reaction_count/a.den), 2) AS reaction_ratio
FROM maxNum b
JOIN base a ON
b.user_id = a.user_id
WHERE b.num = 1 AND ROUND((b.reaction_count/a.den), 2)>=0.6
ORDER BY reaction_ratio DESC, user_id ASC;