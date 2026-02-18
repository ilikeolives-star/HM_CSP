numbers = [3,4,567,75,546,543,22,5858]
names = ["alex", "katie", "andrew", "vienna", "tia"]

names[0] = "alexander"
names.append("Jayshree") #adds to end of the list
index = names.index("katie")
names.pop(index)
print(len(names))
print(names)

for name in names:
    print(f"Hello {name}")

    for number in numbers:
            print(f"{number} - 10 = {number-10}")

            for i in range(20):
                    print