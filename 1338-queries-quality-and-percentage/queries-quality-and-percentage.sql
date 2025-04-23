# Write your MySQL query statement below
select query_name, round(avg(rating/position), 2) as quality, round((COUNT(IF(rating < 3, 1, NULL))/count(rating)*100), 2) as poor_query_percentage 
from Queries
group by query_name; 