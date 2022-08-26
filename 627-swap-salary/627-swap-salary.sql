# Write your MySQL query statement below
# update Salary set sex= case when sex='m' then 'f'
#                             when sex='f' then 'm'
#                             end;
update Salary set sex= if(sex='m','f','m');
