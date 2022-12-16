
import pyfiglet
import subprocess
from pyfiglet import Figlet
f = Figlet(font='slant')
print( f.renderText('*Coding World*'))
# subprocess.run(["ls", "-al"])

text = pyfiglet.figlet_format("Wel come jamil",f)
print(text)
print("[*] Enter a IP and website name ")
i = input()
subprocess.call("nmap  "+i, shell=True)
