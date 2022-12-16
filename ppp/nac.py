from readline import append_history_file
from socket import SO_KEEPALIVE


print("Assalamualikum")

# /usr/sbin/update-info-dir: 2: /etc/environment: JAVA_HOME: not found
# dpkg: error processing package install-info (--configure):
#  installed install-info package post-installation script subprocess returned error exit status 127
# Errors were encountered while processing:
#  install-info
# E: Sub-process /usr/bin/dpkg returned an error code (1)


# problem Solve
# sudo mv /var/lib/dpkg/info/install-info.postinst /var/lib/dpkg/info/install-info.postinst.bad
set1 = {"apple", "banana", "cherry"}
set2 = {1, 5, 7, 9, 3}
set3 = {True, False, False} 

print(set1)
print(set2)
print(set3)