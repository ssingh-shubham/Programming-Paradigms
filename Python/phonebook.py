# Create a phonebook
phonebook = {}

N = int(input("Enter the number of entries in the phonebook: "))

for _ in range(N):
    name = input("Enter a name: ")
    number = input("Enter a phone number: ")
    phonebook[number] = name

search_number = input("Enter a phone number to search: ")

if search_number in phonebook:
    print("Name:", phonebook[search_number])
else:
    print("Phone number not found in the phonebook.")
