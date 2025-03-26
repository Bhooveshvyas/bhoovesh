import mysql.connector

try:
    conn = mysql.connector.connect(
        host="localhost",
        user="root",
        password="yourpassword",
        database="yourdatabase"
    )
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM your_table")
    for row in cursor.fetchall():
        print(row)
except mysql.connector.Error as err:
    print(f"Error: {err}")
finally:
    if conn.is_connected():
        conn.close()