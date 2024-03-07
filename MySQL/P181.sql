select name as Employee from employee e 
where (e.salary) > (select m.salary from employee m where m.id=e.managerid );