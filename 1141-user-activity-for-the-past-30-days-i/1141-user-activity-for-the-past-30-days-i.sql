select activity_date as day,count(distinct user_id) as active_users from Activity where activity_date between '2019-06-28' and '2019-07-27' group by activity_date ;
# SELECT activity_date as day, COUNT(distinct user_id) as active_users
# FROM Activity
# WHERE activity_date BETWEEN '20190628' and '20190727'
# GROUP BY activity_date