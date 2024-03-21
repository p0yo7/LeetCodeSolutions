select sp.name from SalesPerson sp
left join Orders o on sp.sales_id = o.sales_id
left join Company c on o.com_id = c.com_id
group by sp.sales_id
having SUM(IFNULL(C.name = 'RED', 0)) = 0;
