def menu():
    print("menu")
    print("string operation")
    print("1. find the longest string")
    print("2. freq of character")
    print("3. palindrome")
    print("4. index of substring")
    print("5. freq of words")
    print("6. exit")
    



def take_string():
    str=input("enter the string: ")
    return str



def longest():
    
    
    list1=str1.split()
    m=0
    word=0
    print (list1)

    for i in range(len(list1)):
        #len(list1[i])
        if m<len(list1[i]):
            m=len(list1[i])
            word=i
    print("a. the word with longest length" , list1[word])


def freq_char():
   #str1=input("enter the string")
    char = input("enter the character")
    print(str1)
    counter=0
    for i in range(len(str1)):
        if char==str1[i]:
            counter+=1   #c=c+1

    print(f" character {char} present {counter} times in the string : {str1}" )

def palindrome():
    l= len(str1)
    j = l-1

    flag =0
    for i in range(int(l/2+1)):
        if str1[i]==str1[j]:
            flag=1
        else:
            break
        j=j-1

    if (flag==0):
        print("The string is not palindrome")
    else:
        print("The string is  palindrome")

def substr():
    sub=input("Enter substring: ")
    sl = len(sub)
    index=0
    j=0

    for i in range(len(str1)):
        if (sub[j]==str1[i]):

            j = j+1
            if (j==sl):
                index=i-(sl-1)
                break
        else:
            j=0
    print("Substring index: ", index)

def freq_word():
    list1 = str1.split()
    list2=set(list1) #duplicate entry
    list3=list(list2)
    print(list1) #print
    
    print(list3) #print
    list4=[]
    list5=[]
    counter =0
    for i in range(len(list3)):
        counter =0
        for j in range(len(list1)):
            if list3[i]==list1[j]:
                counter+=1
        list4=list3[i],counter
        list5.append(list4)
    
    print(list5)
        
        
menu()    

str1 =take_string()

while True:
    ch =  int(input("enter the choice: "))
    if (ch == 1):
        longest()
    elif (ch == 2):
        freq_char()
    elif (ch == 3):
        palindrome()
    elif (ch == 4):
        substr()
    elif (ch == 5):
        freq_word()
    elif (ch ==6):
        break