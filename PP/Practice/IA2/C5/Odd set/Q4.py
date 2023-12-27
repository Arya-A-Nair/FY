#Write a fucntion AMCount() in Python, which should read each character 
#of a text file STORY.txt, should count and display the occurance 
#of alphabets A and M (small cases too)

def AMCount(file):
    contentoffile = file.read()
    numberofA = 0
    numberofM = 0

    for i in range(len(contentoffile)):
        if contentoffile[i].lower() == "a":
            numberofA += 1

        elif contentoffile[i].lower() == "m":
            numberofM += 1

    return numberofA, numberofM

#try and except blocks basically check if the file is there, try block will fail to 
#execute if STORY.txt doesnt exist meaning except block will make a file named 
#STORY.txt

try:
    f = open("STORY.txt", "r")
    f.close()

except:
    f = open("STORY.txt", "w")
    f.close()

f = open("STORY.txt", "r")

A, M = AMCount(f)

print(f"A-> {A}, M-> {M}")