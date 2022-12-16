import pyfiglet
import subprocess

text = pyfiglet.figlet_format("JAMIL AKTAR")

print(text)
print("[+] Enter an IP or Domain name ")
i = input()
subprocess.call("nmap -PE "+i , shell=True) # "-PE" it will scan NEtwork layer
                                            #"-PU" it will scan transport layer