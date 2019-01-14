min = 0
max = 300
step = 20

for fahren in range(max,min-1,-step):
	print("%3.0f\t%6.1f" % (fahren, (5/9)*(fahren-32)))
