def getInteger():
    numOne = int(input("Please enter an integer number: "))
    return numOne

def Main():
    print("Started")
    output = getInteger()
    print(output)

if __name__=="__main__":
    Main()
