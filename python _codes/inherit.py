class Person:
    def __init__(self,fname,lname):
        self.first_name=fname
        self.second_name=lname

    def display(self):
        print("my fisrt name is : " + self.first_name + "and my last name is : "+self.second_name)

obj=Person("abhay","pratap")
obj.display()