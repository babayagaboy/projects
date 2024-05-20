from mysql.connector import (connection)
 
cnx = connection.MySQLConnection(user='root', password='', host='localhost', database='python_db')
if cnx and cnx.is_connected():
   
    with cnx.cursor() as cursor:
        result = cursor.execute("INSERT INTO IEFP(id, nome, curso, media)VALUES('4', 'Vasco Rodrigues', 'pi05', '10')")
        cnx.commit()
        result = cursor.execute("SELECT * FROM IEFP")
 
        rows = cursor.fetchall()
 
        for row in rows:
            print(row[1])
        cnx.close()
else:
    print("could not connect")