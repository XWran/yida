dicta = {"fir":1}
dictb = {"sec":2}
a = [1, 2]
b = [4, 3]
lista = []
lista.append(dicta)
print lista
lista.extend(a)
print lista
lista.extend(dictb)
print lista

lista.insert(2,b)
print lista
lista = a + b
print lista
lista.sort()
print lista
