with open("numbers.html", "w") as f:
    # creates two tables, one for the even numbers and one for odd numbers
    f.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n")
    f.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n")
    for i in range(1, 50):
        # even number
        if i % 2 == 0:
            f.write("<tr><td>{}</td><td></td></tr>\n".format(i))
        else:
            # odd number
            f.write("<tr><td></td><td>{}</td></tr>\n".format(i))
    f.write("</table>\n</body>\n</html>")
# prints out numbers.html after the numbers are added to the file
with open("numbers.html", "r") as f:
    print(f.read())
    
