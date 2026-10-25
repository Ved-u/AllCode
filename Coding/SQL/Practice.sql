CREATE DATABASE college;
use college;
create table student(
	id int primary key,
    name varchar(50),
    age int not null
);
insert into student values(1,"vedant",22);
insert into student values(2,"shradha",24);
select * from student;
drop database college;

create database Microsoft;
use Microsoft;
create table employee(
	id int primary key,
    name varchar(50),
    salary int not null
);
insert into employee values(1,"vedant",4500000),(2,"shradha",5000000);
select * from employee;
drop database Microsoft;

Create database college;
use college;
Create table student(
	roll int primary key,
    name varchar(50),
    marks int not null,
    grade varchar(1),
    city varchar(20)
);
insert into student 
values (101,"ved",70,"a","pandharpur"),
		(102,"vedant",70,"a","pandharpur"),
        (103,"vedu",70,"a","pandharpur"),
        (104,"vedz",70,"a","pandharpur"),
        (105,"vedya",70,"a","pandharpur");
select city, avg(marks) from student group by city order by city; 