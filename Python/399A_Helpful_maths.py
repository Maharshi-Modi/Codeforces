inp = input()

#removing '+' from the inp string
i = 0
temp = ''
for i in range (0 , len(inp)):
    if inp[i] != '+':
        temp += inp[i]

#converting string temp to integer array
int_arr = []

for i in range (0 , len(temp) ):
    int_arr.append(temp[i])

# sorting the list
int_arr.sort()

# converting the list back to string 
str_arr =''
for i in range(0 , len(int_arr)):
    str_arr += str(int_arr[i]) + '+'
print(str_arr[0:-1])
