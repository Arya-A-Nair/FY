#WAP to create a file named "students.txt" to store student details.
#each line in file is rollno, name, marks in three subjects, allow
#user to input details for multiple students and write them in file.

try:
    f = open("students.txt", "r")
    f.close()

except FileNotFoundError:
    f = open("students.txt", "w")
    f.write("Roll no.\t\t Name\t\tMaths\t\tPython\t\tChem\n")
    f.close()

f = open("students.txt", "a")

j = True

while j:
    roll = input("Enter roll no. (enter -1 to exit): ")
    if roll == "-1":
        break
    name = input("Enter name: ")
    math = input("Enter Math marks: ")
    python = input("Enter Python marks: ")
    chem = input("Enter Chem marks: ")

    f.write(f"{roll}\t\t{name}\t\t{math}\t\t{python}\t\t{chem}\n")