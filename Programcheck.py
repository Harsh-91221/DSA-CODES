def checkprime(num):
    if num == 1:
        print("NOT PRIME")
    elif num > 1:
        for i in range(2, num):
            if (num % i) == 0:
                print("NOT PRIME")
                break
        else:
            print("PRIME")
    else:
        print("NOT PRIME")
num = int(input("ENTER THE NUMBER "))
checkprime(num)
