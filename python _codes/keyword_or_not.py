kewword={"break","case","continue","defer","else","if","for","while"}
input_var=str(input("enter the string"))
if input_var in kewword:
    print(input_var + "is a keyword")
else:
    print(input_var + "is a not keyword")
    