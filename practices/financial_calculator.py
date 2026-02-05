# HM financial calculator
monthly_income = input("What is your monthly income? $")
monthly_rent = input("How much is the rent monthly: $")
monthly_utilities = input("How much is the utilities monthly: $")
month_groceries = input("How much is the groceries monthly: $")
monthly_transportation = input("How much is monthly transportation: $")

savings = monthly_income * 0.1
money = monthly_income - monthly_rent - monthly_utilities - month_groceries - monthly_transportation - savings

print(f"Your rent is $ {monthly_rent} and that is 40 % of your income")
print(f"Your utilities is $ {monthly_utilities} and that is 7 % of your income")
print(f"Your grocieries is $ {month_groceries} and that is 7 % of your income")