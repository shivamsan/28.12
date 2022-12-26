def print_menu():
    print("-----------------------MENU--------------------")
    print("\t1. selection sort")
    print("\t2. bubble sort")
    print("\t3. exit")

def TakeInput():
 num = int(input(f'enter how many numbers to take :'))
 array = []
 for i in range(0,num):
    array.append(float(input("enter percentage")))
 return array
arr=TakeInput()

#print the name of the players
print("entered percentage are",arr)



def selection_sort(a):

    for i in range(len(a)-1):
        min_index = i
        for j in range(i,len(a)):
            if a[min_index] > a[j]:
                min_index =j
        a[i], a[min_index] = a[min_index], a[i]

    return a

    


def bubble_sort(a):
    for j in range(len(a)):
        for i in range(len(a)-1):
            if a[i] > a[i+1]:
                a[i], a[i+1] = a[i+1], a[i]

    return a
    
    

def top_five_marks(a):
 print("Top 5 Marks are : ") #len(a)
 print(*a[:-6:-1], sep="\t")

#a = [22,5,1,9,7,5,3,2]


print_menu()

choice = int(input("Enter your choice: "))
while(choice != 4):

    if(choice == 1):
        #print("unsorted: ", arr)
        print("sorted: ",selection_sort(arr))
        
        y=input("\nDo you want to display top marks from the list (yes/no) : ")
        if y=='yes':
            top_five_marks(arr)
        



    if(choice == 2):
        #print("unsorted bubble : ", arr)
        print("sorted: " , bubble_sort(arr))
        
        y=input("\nDo you want to display top marks from the list (yes/no) : ")
        if y=='yes':
            top_five_marks(arr)

    if(choice == 3):
        print("\nThanks for using this program!!")

        break
        
        


    print_menu()
    choice = int(input("Enter your choice: "))

    




            