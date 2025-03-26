# import sqlite3
# conn = sqlite3.connect("MY FILE.db")
# print("DATABASE IS CONNNTECTED")
# conn.execute('''
#             CREATE TABLE IF NOT EXISTS TODO(
#                 if int parimary key,
#                 task varchar(80)
#             );
# ''')
# query="INSERT INTO TODO(task) VALUES('Record')"
# conn.execute(query)
# query = "SELECT * FROM TODO;"
# for i in conn.execute(query):
#     print(i_
# conn.close()
# import sqlite3
# conn = sqlite3.connect("MYFILE.db")
# conn.execute('''
#         CREATE TABLE IF NOT EXISTS TODO(
#             id int primary key,
#             task varchar(80)
#       );
# ''')
# query = "INSERT INTO TODO(task) VALUES('Record');"
# conn.execute(query)

# query = "SELECT * FROM TODO;"
# for i in conn.execute(query):
#     print(i)
# print("Database Connected!!...")
# conn.close()
import sqlite3
conn = sqlite3.connect
conn.execute('''
             CREATE TABLE IF NOT EXISTS TODO(
                 id int primary key,
                 task varchar(90)
             );
             ''')

query = "INSERT INTO TODO(task) VALUES('Record'); "
conn.execute(query)
query = "SELECT * FROM TODO;"
for i in conn.execute(query):
    print(i)
print("DATABASE SET UP SUCCESSFULLY")
conn.close()