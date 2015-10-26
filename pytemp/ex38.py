# EX38
# list, list methods

ten_things = "Ap Or Cr Te Li Su"

print "Let's make it ten."

stuff = ten_things.split(' ')
more_stuff = ["Co", "Ba", "Gi", "Bo"]

while len(stuff) != 10:
	next_one = more_stuff.pop()
	print "Adding: ", next_one
	stuff.append(next_one)
	print "There are %d items now." % len(stuff)
	
print "Done. Let's do sth. else."	

print stuff
print stuff[1]
print stuff[-1]
print stuff.pop()
print ' '.join(stuff)
print '*'.join(stuff[3:5])