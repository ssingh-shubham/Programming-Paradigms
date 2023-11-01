def display_month(month_num):
    months = [
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    ]
    if 1 <= month_num <= 12:
        print("Month:", months[month_num - 1])
    else:
        print("Invalid month number.")

month_number = int(input("Enter a month number (1-12): "))
display_month(month_number)
