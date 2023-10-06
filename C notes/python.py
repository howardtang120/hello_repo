#python program.py




#for SQLite3
import sqlite3
cur = sqlite3.SQL("sqlite:///name.db")
cur.execute("CREATE TABLE movie(title, year, score)")
cur.execute("""
    INSERT INTO movie VALUES
        ('Monty Python and the Holy Grail', 1975, 8.2),
        ('And Now for Something Completely Different', 1971, 7.5)
""")

data = cur.execute("SELECT * FROM movie")
for row in data:
    print(f"{row['title']}")