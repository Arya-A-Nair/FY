#WAP to create file "Student.txt" which stores student details by adding 
#roll no. name and department into it using the following format-->
#Roll no.    Name      Department
#1         Aditya       Comps
#2         Rajesh        IT
#3         Name         Comps

n = 0
try:
    f = open("Student.txt", "r")

except FileNotFoundError:
    f = open("Student.txt", "w")
    f.write("Roll no.\tName\tDepartment")

while n == 0:
    inp = input("Enter purpose: \n\"a\" --> add item \n\"v\" -->view details of roll no. (Enter -1 to exit)\n")
    
    if inp == "-1":
        break
    
    if inp == "a":
        f = open("Student.txt", "a")
        roln = int(input("Enter roll no.: "))

        name = input("Enter name: ")
        Depart = input("Enter Department: ")
        f.write(f"\n{roln}\t{name}\t{Depart}")
        f.close()

    elif inp == "v":
        req = input("Enter roll no.:")
        f = open("Student.txt", "r")
        arr = f.readlines()[1:]
        f.close()

        present = False

        for i in arr:
            roll, nam, dep = i.split()

            if roll == req:
                print(nam, dep)
                present = True
            
        if present == False:
            print("Not in File")
        



        

