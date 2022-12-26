def print_menu():
    print("-----------------------MENU--------------------")
    print("\t1. Display the addition of the matrix")
    print("\t2. Display the substraction of the matrix")
    print("\t3. Display the multiplication of matrices")
    print("\t4. Display the transpose of matrices")
    print("\t5. End")
    print("-----------------------------------------------")

def display():
    print("m1: ", m1)
    print("m2: ", m2)

def addition():
    for i in range(row):
        for j in range(col):
            ans[i][j] = m1[i][j] + m2[i][j]

    print("add", ans)

def subtraction():
    for i in range(row):
        for j in range(col):
            ans[i][j] = m1[i][j] - m2[i][j]

    print("sub: ", ans)

def multiplication():
        if(len(m1[0]) == len(m2)):
            print("mult possible")

            ans = [[0 for i in range(len(m2[0]))] for i in range(len(m1[0]))]

            for i in range(row):
                for j in range(col):
                    for k in range(row):  #len(m2) == row
                        ans[i][j] += m1[i][k] * m2[k][j]
            print("multi ", ans)       

        else:
            print("mult not possible")

def transpose():
        choice2 = int(input("Enter which matrix to transpose[1/2] :"))
        if(choice2 == 1):

            ans =[[0 for i in range (row)] for j in range (col)]

            for i in range(col):
                for j in range(row):
                    ans[i][j] = m1[j][i]
        

            print("trans: ", ans)


        else:
            ans =[[0 for i in range (row)] for j in range (col)]

            for i in range(col):
                for j in range(row):
                    ans[i][j] = m2[j][i]

                
        

            print("trans: ", ans)

row = int(input("enter row count: "))
col = int(input("enter col count: "))

m1 = [[0 for i in range(col)] for i in range(row)]
m2 = [[0 for i in range(col)] for i in range(row)]
ans = [[0 for i in range(col)] for i in range(row)]


for n in range(2):
    print(f"enter data for matrix {n+1} : ")
    if n ==0:
        matrix =m1
    else:
        matrix = m2
    for i in range (row):
        for j in range(col):
            matrix[i][j]= int(input(f"enter value of row {i+1} and col {j+1}: "))


display()
print_menu() 

choice = int(input("Enter your choice: "))
while(choice != 5):

    if(choice == 1):
        addition()

    if(choice == 2):
        subtraction()

    if(choice == 3):
        multiplication()           

    if(choice == 4):
        transpose()

    print_menu()
    choice = int(input("Enter your choice: "))
