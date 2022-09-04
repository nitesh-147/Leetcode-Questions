# Write your MySQL query statement below
select a.name,sum(b.amount) as balance from Users a join Transactions b on a.account=b.account group by b.account having balance > 10000;