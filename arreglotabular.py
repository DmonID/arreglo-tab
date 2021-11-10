print("X\tY")
x=[]
y=[]
for i in range (11):
    x.append(i)
    y.append(x[i]**2-10*x[i]+24)
for i in range(11):
    print(x[i],"\t",y[i])