# SAMPLE DATA ENTRY

```sql
CREATE DATABASE dbms;
USE dbms;

CREATE TABLE department
(
dno int(10) NOT NULL PRIMARY KEY,
dname varchar(50) DEFAULT NULL,
location varchar(50) DEFAULT NULL,
);

INSERT INTO department VALUES
(10,'Accounting','New York'),
(20,'Research','Dallas'),
(30,'Sales','Chicago'),
(40,'Opration','Boston'),
(50,'Marketing','New Delhi');

SET FOREIGN_KEY_CHECKS=0;

CREATE TABLE employee
(
eno char(3) NOT NULL PRIMARY KEY,
ename varchar(50) NOT NULL,
job_type varchar(50) NOT NULL,
manager char(3) DEFAULT NULL,
hire_date date NOT NULL,
dno int(10) NOT NULL,
commission decimal(10,2) DEFAULT NULL,
salary decimal(7,2) NOT NULL,
CONSTRAINT dno FOREIGN KEy (`dno`)
REFERENCES department(`dno`),
CONSTRAINT manager FOREIGN KEy (`manager`)
REFERENCES emplyoee(`eno`)
);

INSERT INTO employee VALUES
('736','Smith','Clerk','790','1981-12-17',20,0.00,1000.00),
('749','Allan','Sales_man','769','1981-02-20',30,300.00,2000.00),
('752','Ward','Sales_man','769','1981-02-22',30,500.00,1300.00),
('756','Jones','Manager','783','1981-04-02',20,0.00,2300.00),
('765','Martin','Sales_man','784','1981-04-22',30,1400.00,1250.00),
('769','Blake','Manager','783','1981-05-01',30,0.00,2870.00),
('778','Clark','Manager','783','1981-06-09',10,0.00,2900.00),
('783','King','President',NULL,'1981-11-17',10,0.00,2950.00),
('784','Turner','Sales_man','769','1981-09-08',30,0.00,1450.00),
('787','Adams','Clerk','778','1983-01-12',20,0.00,1150.00),
('788','Scott','Analyst','756','1982-12-09',20,0.00,2850.00),
('790','James','Clerk','769','1981-12-03',30,0.00,950.00),
('792','Ford','Analyst','756','1981-12-03',20,0.00,2600.00),
('793','Miller','Clerk','788','1982-01-23',40,0.00,1300.00);

SET FOREIGN_KEY_CHECKS=1;
```

## ANSWERS

1. Query to display Employee Name,  Job, Hired Date, Employee Number for each employee with the employee number appearing first.

```sql
SELECT eno,ename,job_type,hire_date FROM employee;

+-----+--------+-----------+------------+
| eno | ename  | job_type  | hire_date  |
+-----+--------+-----------+------------+
| 736 | Smith  | Clerk     | 1981-12-17 |
| 749 | Allan  | Sales_man | 1981-02-20 |
| 752 | Ward   | Sales_man | 1981-02-22 |
| 756 | Jones  | Manager   | 1981-04-02 |
| 765 | Martin | Sales_man | 1981-04-22 |
| 769 | Blake  | Manager   | 1981-05-01 |
| 778 | Clark  | Manager   | 1981-06-09 |
| 783 | King   | President | 1981-11-17 |
| 784 | Turner | Sales_man | 1981-09-08 |
| 787 | Adams  | Clerk     | 1983-01-12 |
| 788 | Scott  | Analyst   | 1982-12-09 |
| 790 | James  | Clerk     | 1981-12-03 |
| 792 | Ford   | Analyst   | 1981-12-03 |
| 793 | Miller | Clerk     | 1982-01-23 |
+-----+--------+-----------+------------+
```
2. Query to display unique jobs from Employee table.o

```sql
SELECT DISTINCT job_type FROM employee;

+-----------+
| job_type  |
+-----------+
| Clerk     |
| Sales_man |
| Manager   |
| President |
| Analyst   |
+-----------+
```

3. Query to display the Employee Name Concatenated by a Job separated by a comma.

```sql
SELECT CONCAT (ename,',',job_type) AS name_job FROM employee;

+------------------+
| name_job         |
+------------------+
| Smith,Clerk      |
| Allan,Sales_man  |
| Ward,Sales_man   |
| Jones,Manager    |
| Martin,Sales_man |
| Blake,Manager    |
| Clark,Manager    |
| King,President   |
| Turner,Sales_man |
| Adams,Clerk      |
| Scott,Analyst    |
| James,Clerk      |
| Ford,Analyst     |
| Miller,Clerk     |
+------------------+
```

4. Query to display all the data from Employee table, separate each column by a comma and name said column as THE_OUTPUT.

```sql
SELECT CONCAT (eno,',',ename,',',job_type,',',manager,',',hire_date,',',dno,',',commissi  on,',',salary) AS THE_OUTPUT FROM employee;

+--------------------------------------------------------+
| THE_OUTPUT                                             |
+--------------------------------------------------------+
| 736,Smith,Clerk,790,1981-12-17,20,0.00,1000.00         |
| 749,Allan,Sales_man,769,1981-02-20,30,300.00,2000.00   |
| 752,Ward,Sales_man,769,1981-02-22,30,500.00,1300.00    |
| 756,Jones,Manager,783,1981-04-02,20,0.00,2300.00       |
| 765,Martin,Sales_man,784,1981-04-22,30,1400.00,1250.00 |
| 769,Blake,Manager,783,1981-05-01,30,0.00,2870.00       |
| 778,Clark,Manager,783,1981-06-09,10,0.00,2900.00       |
| 783,King,President,,1981-11-17,10,0.00,2950.00         |
| 784,Turner,Sales_man,769,1981-09-08,30,0.00,1450.00    |
| 787,Adams,Clerk,778,1983-01-12,20,0.00,1150.00         |
| 788,Scott,Analyst,756,1982-12-09,20,0.00,2850.00       |
| 790,James,Clerk,769,1981-12-03,30,0.00,950.00          |
| 792,Ford,Analyst,756,1981-12-03,20,0.00,2600.00        |
| 793,Miller,Clerk,788,1982-01-23,40,0.00,1300.00        |
+--------------------------------------------------------+
```

5. Query to display the Employee Name and Salary of all the Employees earning
   more than $2850

```sql
SELECT ename,salary FROM employee WHERE (salary + commission) > 2850;

+-------+---------+
| ename | salary  |
+-------+---------+
| Blake | 2870.00 |
| Clark | 2900.00 |
| King  | 2950.00 |
+-------+---------+
```

6. Query to display Employee name and Department number for the Employee no
   7900.

```sql
SELECT ename,dno FROM employee WHERE eno='790';

+-------+-----+
| ename | dno |
+-------+-----+
| James | 30  |
+-------+-----+
```

7. Query to display Employee Name and Salary for all Employees who Salary is not in the range of Rs. 1500 and Rs. 2850.

```sql
SELECT ename,salary FROM employee WHERE salary NOT BETWEEN 1500 AND 2850;

+--------+---------+
| ename  | salary  |
+--------+---------+
| Smith  | 1000.00 |
| Ward   | 1300.00 |
| Martin | 1250.00 |
| Blake  | 2870.00 |
| Clark  | 2900.00 |
| King   | 2950.00 |
| Turner | 1450.00 |
| Adams  | 1150.00 |
| James  | 950.00  |
| Miller | 1300.00 |
+--------+---------+
```
