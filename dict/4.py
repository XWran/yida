a = "{'count':0,'price':6},{'count':5,'price':6}"
b = eval(a)
print b
if b is tuple:
    print 'yes'
c = []
c.append(b)
print c
