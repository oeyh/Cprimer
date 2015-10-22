from sys import argv
from os.path import exists

script, from_file, to_file = argv

print "Copying from %s to %s" % (from_file, to_file)

# if merge into one line, 
# the file would be closed by Python once that line runs
indata = open(from_file).read()
# in_file = open(from_file)
# indata = in_file.read()

print "The input file is %d bytes long." % len(indata)

# if or not the file exists does not affect afterwards
print "Does the output file exist? %r" % exists(to_file)

# 'w' is a must
# out_file = open(to_file)
out_file = open(to_file, 'w')
out_file.write(indata)

print "All done."

out_file.close()
# in_file.close()