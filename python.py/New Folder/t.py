
book = {}
book['jam'] = {
            'vill': 'gofurpur',
             'name': 'jamil',
             'phone': "8768134644"
             }

book['raih'] = {
            'vill': 'razpa',
             'name': 'raiha',
             'phone': "7074531506"
             }


import json
s = json.dumps(book)
# print(s)
with open('jam.txt', 'w') as f:
    f.write(s)
    