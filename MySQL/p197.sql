select w2.id as Id from Weather w1
join Weather w2 on w1.recordDate + INTERVAL 1 DAY= w2.recordDate
where w1.temperature < w2.temperature