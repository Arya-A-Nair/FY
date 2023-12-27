employees = [{"name": "John Doe", "age": 25, "salary": 40000.0}, {"name": "Jane Doe", "age": 35, "salary": 60000.0}, {"name": "Bob Smith", "age": 45, "salary": 80000.0}, {"name": "Alice Johnson", "age": 30, "salary": 55000.0}, {"name": "Mike Williams", "age": 28, "salary": 45000.0}]

print("\nEmployees above age 30")
agelist = list(filter(lambda a: a.get("age")>=30, employees))
print(agelist)

print("\nEmployees with increased salary")
salary = list(map(lambda a: a.get("salary") + a.get("salary")*0.1, employees))
print(salary)

print("\nEmployees with salary above 50000")
fiftyk = list(filter(lambda a: a.get("salary")>50000, employees))
print(fiftyk)