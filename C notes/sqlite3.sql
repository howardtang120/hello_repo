--sqlite3 name.db

.schema
CREATE TABLE students (
    id INTEGER,
    student_name TEXT,
    house TEXT,
    head TEXT,
    PRIMARY KEY(id)
);

SELECT * from students;

SELECT student_name FROM students
    WHERE student_name IN (
        SELECT * FROM students WHERE head LIKE '%snape');


SELECT * FROM house_assignments
  JOIN students ON students.id = house_assignments.student_id
  JOIN houses ON houses.id = house_assignments.house_id
  WHERE house = 'Slytherin';


  SELECT * FROM students WHERE id IN (
    SELECT student_id from house_assignments WHERE house_id = (
        SELECT id from houses WHERE house = 'Slytherin'
    ));