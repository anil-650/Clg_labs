-- USE SQL synatx : insertin, deletion, join, updating using SQL
-- INSERT command
INSERT INTO
Customers(Customers_name, Constact_name, Address, City, Postal_code, Country);
VALUES ( 'cardinal','Tom B. Erichisen','Stagen 1','salvanger','4066','Norway');

-- DELETE command
DELETE FROM Customers;

-- UPDATE command
UPDATE Customers set Constact_name='Alfred Schimdt', City='Frankfrut' WHERE Customers_ID=1 ;

-- JOIN command
SELECT orders, orderID, Customers, Customers_name orders.order.order_date FROM orders
INNER JOIN Customers ON orders Customers
ID=Customers Customers_ID;

-- OUTPUT

-- INSERT command
INSERT INTO
Customers(Customers_name, Constact_name, Address, City, Postal_code, Country);
VALUES ( 'cardinal','Tom B. Erichisen','Stagen 1','salvanger','4066','Norway');

-- DELETE command
DELETE FROM Customers;

-- UPDATE command
UPDATE Customers set Constact_name='Alfred Schimdt', City='Frankfrut' WHERE Customers_ID=1 ;

-- JOIN command
SELECT orders, orderID, Customers, Customers_name orders.order.order_date FROM orders
INNER JOIN Customers ON orders Customers
ID=Customers Customers_ID;
