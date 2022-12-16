f = open('jam.txt', 'r')
s = f.read()
print(s)



import json
d = json.loads(s)
print(d)
print(d['raih'])

for i in d:
    print(d[i])