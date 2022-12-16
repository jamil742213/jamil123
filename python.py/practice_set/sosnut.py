import json
data = '{"var1":"jamil", "var2":39}'

# print(data)


parsed = json.loads(data)
print(parsed['var1'])