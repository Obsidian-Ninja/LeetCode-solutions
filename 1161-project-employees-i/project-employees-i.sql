# Write your MySQL query statement below
select distinct P.project_id, round(avg(E.experience_years),2) as average_years
from Project P
left join Employee E
on P.employee_id=E.employee_id
group by project_id;