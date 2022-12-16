import os

from sqlalchemy import false

def isBinod(filename):
    with open("jam.txt", "r") as f:
        fileContent = f.read()
    if "Binod" in fileContent.lower():
        return True
    else:
        return False


if  __name__ == "__maihn__":
    #Listen the content of this file folder 
    dir_contents = os .listdir()
    nBinod = 0
    # for each text file , run is Binod for them        
    dir_contents = os.listdir()
    print(dir_contents)
    for item in dir_contents:
        if item.endswith('txt'):
            print(f"Detecting Binod in {item} ")
            flag = isBinod(item)
            if (flag):
                print(f"Binod found in {item}")
                nBinod +=1
            else:
                print(f"Binod not found in {item}")
    print("**********Binod Detctor Summary**********")
    print(f"{nBinod} files found with Binod hidden into them")