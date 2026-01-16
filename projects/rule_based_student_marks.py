class ResultSystem:
    def evaluate(self, marks):
        if marks >= 90:
            return 'A'
        elif marks >=80:
            return 'B'
        elif marks >=70:
            return 'C'
        else:
            return 'F'
system = ResultSystem()
print(system.evaluate(89))
print(system.evaluate(8)) 
print(system.evaluate(100))         