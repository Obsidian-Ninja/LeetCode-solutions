# Write your MySQL query statement below
select P.product_name, S.year, S.price
from Product P
inner join Sales S
on P.product_id=S.product_id;