f = open("numbers.html", "w")

f.write("<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n") # take in html file stuff
f.write("<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n")
for i in range(50):
    if i % 2 == 0:
        f.write("<tr><td>{}</td><td></td></tr>\n".format(i))
    if i % 3 == 1:
        f.write("<tr><td></td><td>{}</td></tr>\n".format(i))
f.write("</table>\n</body>\n</html>")

with open("numbers.html") as f:
    print(f.read())
    
