class student:
    def __init__(self, name, age, branch):
        self.name = name
        self.branch = branch
        self.age = age
    def display(self):
        print(self.name, self.branch, self.age)
s1 = student("Harshita", 20, "CSE")
s1.display()            