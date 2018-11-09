shin=# select * from instructor;
 id | name | dept_name | salary 
----+------+-----------+--------
(0 rows)

ashin=# insert into instructor values(101,'albin','mca',15000);
INSERT 0 1
ashin=# insert into instructor values(102,'ebin','mcom',20000);
INSERT 0 1
ashin=# insert into instructor values(103,'dias','mca',25000);
INSERT 0 1
ashin=# insert into instructor values(104,'dileep','msc',18000);
INSERT 0 1
ashin=# select * from instructor;
  id   |  name  | dept_name |  salary  
-------+--------+-----------+----------
 101   | albin  | mca       | 15000.00
 102   | ebin   | mcom      | 20000.00
 103   | dias   | mca       | 25000.00
 104   | dileep | msc       | 18000.00
(4 rows)

ashin=# select avg(salary) from instructor where dept_name='mca';
        avg         
--------------------
 20000.000000000000
(1 row)

ashin=# select avg(salary) from instructor;
        avg         
--------------------
 19500.000000000000
(1 row)

ashin=# select count(*) from instructor;
 count 
-------
     4
(1 row)

ashin=# select dept_name,avg(salary) as avg_salaryfrom instructor group by dept_name;
ERROR:  syntax error at or near "instructor"
LINE 1: select dept_name,avg(salary) as avg_salaryfrom instructor gr...
                                                       ^
ashin=# select dept_name,avg(salary) as avg_salary from instructor group by dept_name;
 dept_name |       avg_salary       
-----------+------------------------
 mcom      |     20000.000000000000
 mca       |     20000.000000000000
 msc       | 18000.0000000000000000
(3 rows)

ashin=# select max(salary) as max_salary from dept_name;
ERROR:  relation "dept_name" does not exist
LINE 1: select max(salary) as max_salary from dept_name;
                                              ^
ashin=# select max(salary) as max_salary from instructor;
 max_salary 
------------
   25000.00
(1 row)

ashin=# select min(salary) as min_salary from instructor;
 min_salary 
------------
   15000.00
(1 row)

ashin=# select count(salary) from insructor;
ERROR:  relation "insructor" does not exist
LINE 1: select count(salary) from insructor;
                                  ^
ashin=# select count(salary) from instructor;
 count 
-------
     4
(1 row)

ashin=# select count(instructor) from instructor;
 count 
-------
     4
(1 row)

ashin=# select dept_name,avg(salary) as avg_sal from instructor group by dept_name having avg(salary)>18000;
 dept_name |      avg_sal       
-----------+--------------------
 mcom      | 20000.000000000000
 mca       | 20000.000000000000
(2 rows)

ashin=# select dept_name,avg(salary) as avg_sal from instructor group by dept_name having avg(salary)>20000;
 dept_name | avg_sal 
-----------+---------
(0 rows)

ashin=# select sum(salary) from insrtuctor;
ERROR:  relation "insrtuctor" does not exist
LINE 1: select sum(salary) from insrtuctor;
                                ^
ashin=# select sum(salary) from instructor;
   sum    
----------
 78000.00
(1 row)

ashin=# 

