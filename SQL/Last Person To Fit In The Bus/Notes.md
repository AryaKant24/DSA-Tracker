# Notes

## Approach
1. Self join table on itself to calculate cumulative sum
2. Add q2.turn over q1.turn whilte q1.turn<=q2.turn
3. Check sum<=1000
4. Order by turn desc because we want last turn
5. Return limit 1

q1           q2
────────────────────────────
Alice        Alice

Alex         Alice
Alex         Alex

John         Alice
John         Alex
John         John

Marie        Alice
Marie         Alex
Marie        John
Marie        Marie

Bob          Alice
Bob          Alex
Bob          John
Bob          Marie
Bob          Bob

Winston      Alice
Winston      Alex
Winston      John
Winston      Marie
Winston      Bob
Winston      Winston

| q1 person | q1 turn | q2 weights                   |
| --------- | ------: | ---------------------------- |
| Alice     |       1 | 250                          |
| Alex      |       2 | 250, 350                     |
| John Cena |       3 | 250, 350, 400                |
| Marie     |       4 | 250, 350, 400, 200           |
| Bob       |       5 | 250, 350, 400, 200, 175      |
| Winston   |       6 | 250, 350, 400, 200, 175, 500 |

| q1 person | q1 turn | `SUM(q2.weight)` |
| --------- | ------: | ---------------: |
| Alice     |       1 |              250 |
| Alex      |       2 |              600 |
| John Cena |       3 |             1000 |
| Marie     |       4 |             1200 |
| Bob       |       5 |             1375 |
| Winston   |       6 |             1875 |

| person    | cumulative weight | Keep? |
| --------- | ----------------: | ----- |
| Alice     |               250 | ✅     |
| Alex      |               600 | ✅     |
| John Cena |              1000 | ✅     |
| Marie     |              1200 | ❌     |
| Bob       |              1375 | ❌     |
| Winston   |              1875 | ❌     |

