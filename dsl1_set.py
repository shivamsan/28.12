def TakeInput(Sport):
 players = int(input(f'Enter how many players playing {Sport}:'))
 array = []
 for i in range(0,players):
    array.append(input("Enter the name of players:"))
 return array
a=TakeInput("Cricket")
c=TakeInput("Football")
b=TakeInput("Badminton")

def intersection(L1,L2):
    res = []  #emptry list
    for student in L1:
        if student in L2:  #used membership operator in
            res.append(student)

    return res  #return a list called resultant which will store the result

def union(L1,L2):
    res =L2.copy()

    for student in L1:
        if not student in L2:  #not or!
            res.append(student)
    return res

def diff(L1,L2):
    res = [] 

    for student in L1:
        if not student in L2:  #not or!
            res.append(student)
    return res

print(f"A = {a}  \nB={b}  \nC={c} \n")

print("a", end=" ")
print(intersection(a,b))


u = union(a,b)
i = intersection(a,b)

print("b",end=" ")
print(diff(u,i))

q = union(a,b)

d = diff(c,q)

print("c", end=" ")
print(d)

p = intersection(a,c)
l = diff(p,b)

print("d", end=" ")
print(l)
