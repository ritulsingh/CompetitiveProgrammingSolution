name = (input("Enter: "))
reversedName = "".join(reversed(name))
length = len(name)
for i in range(0,length):
    for j in range(0, length-i-1):
        print(end=" ")
    for j in range(0, i+1):
        print(name[j], end=" ")
    print()
for i in range(length ,0,-1):
    for j in range(0, length-i):
        print(end=" ")
    for j in range(0, i):
        print(reversedName[j], end=" ")
    print()