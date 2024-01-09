-- Program on database trigger
CREATE TABLE Product(
	message VARCHAR 2(50)
	current Data NUMBER(32)
);

-- Lets create  a before and after  statement and row lwvwl trriggers for the Product table
-- A/ Before update, statement level

CREATE OR REPLACE TRIGGER BEFORE update_state Product
BEFORE
UPDATE ON Product
BEGIN
	INSERT INTO Product_cheer VALUES(
		'Before update, statement level: Syntax'
	):
END;

-- B/ Before update, row level
CREATE OR REPLACE TRIGGER BEFORE update_row Product
BEFORE
UPDATE ON Product
FOR EACH ROW
	BEGIN
		INSERT INTO Product_cheer
		VALUES ('Before update row level, a gadete');
END;

-- C/ After update, statement level

CREATE OR REPLACE TRIGGER AFTER update_state Product
AFTER
UPDATE ON Product
BEGIN
	INSERT INTO Product_cheer VALUES(
		'Before update, statement level: Syntax'
	):
END;

-- D/ After update, row level
CREATE OR REPLACE TRIGGER AFTER update_row Product
AFTER UPDATE ON Product
FOR EACH ROW
	BEGIN
		INSERT INTO Product_cheer
		VALUES ('After update row level, a Sydete');
END;

-- Now Lets execute a update statement on table Product
UPDATE Product SET unit price 800 WHERE Product_ID in (100,101)

-- Lets check the dat in Product_cheer table to see the order in which the
-- trigger is tried
SELECT * FROM Product_cheer;

-- OUTPUT
-- Also do the same fror insert and delete command
