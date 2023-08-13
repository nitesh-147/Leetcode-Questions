# Write your MySQL query statement below
# SELECT employee_id,name,
# (select count(*) from Employees where reports_to=e.employee_id) as reports_count,
# (select round(avg(age)) from Employees where reports_to=e.employee_id) as average_age
# from Employees e 
# where (select avg(age) from Employees where reports_to=e.employee_id) is not null
# order by employee_id;

select e1.employee_id,e1.name,
count(*) as reports_count,
round(avg(e2.age)) as average_age
from Employees e1 inner join Employees e2 on
e1.employee_id=e2.reports_to
group by e1.employee_id
order by e1.employee_id;