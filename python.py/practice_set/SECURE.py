



SECURE = (('s', '$'),('and','&'),('a','@'),('O','0'),('or','|'),('i','1'))
def securepassword(password):
    for a, b in SECURE:
        password= password.replace(a ,b)
    return password


if __name__ == "__main__":
    password =input("Enter your password")
    password = securepassword(password)
    print(f"Your secure password is {password}")