a = {"A": "a","B": "b"}
b = {"2":2,"3": 3}
c = dict(dict.items(a) + dict.items(b))
print c
d = dict(a, **b)
print d
