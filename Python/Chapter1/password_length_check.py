password = str(input("enter the password"))
length = len(password)
if length < 12:
    print("password is short")
else:
    print("password is sufficient")
