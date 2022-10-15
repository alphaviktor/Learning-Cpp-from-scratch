#importing mysql database 

import mysql.connector
mydb = mysql.connector.connect(host="localhost", user="root", passwd="password", database="musicdata")

#creating the cursor
mycursor = mydb.cursor()


mycursor.execute("show databases")
#inputting the genre choice
choice = input("Enter your choice of genre from:\n1. romantic\n2. k-pop\n3. workout\n4. travel\n5. fresh")

#giving the output
mycursor.execute("SELECT * FROM music WHERE( genre = 'choice')")
my_result = mycursor.fetchall()




