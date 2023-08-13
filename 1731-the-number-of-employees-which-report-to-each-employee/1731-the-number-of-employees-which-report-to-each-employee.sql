# Write your MySQL query statement below
SELECT employee_id,name,
(select count(*) from Employees where reports_to=e.employee_id) as reports_count,
(select round(avg(age)) from Employees where reports_to=e.employee_id) as average_age
from Employees e 
where (select avg(age) from Employees where reports_to=e.employee_id) is not null
order by employee_id;
