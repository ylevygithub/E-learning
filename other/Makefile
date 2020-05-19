## Not Epitech header
##
##
##
##
##


# this is to make sure the coverage information is collected
CRITERION = -fprofile-arcs -ftest-coverage
LDCRITERION = -lcriterion

# mah gcc to see what -g, -pg ans -O0 flags do to your executable 
CFLAGS = -g -pg -O0 -Wall $(CRITERION)

#CFLAGS = -g -bg -Wall -I./include

#LDFLAGS = -L./lib/my -lmy

# I could just go zith -lcriterion here, but wanted to demonstrate the use of intermediary variables
LDFLAGS = $(LDCRITERION) 

# you don't even need to specify the compilation line because above you listed the flags

all: units

#you can define each dependency as well
units: units.o

# even deeper maybe you want to compile more than one .c file for this .o file
units.o: units.c 

clean:
	rm -f units *.o *~ sandbox* gmon* *.gcda *.gcno

# just for the fun of it to show you how to execute things 
# the condition all here means that compilation has to be successful before this will work
# this will run your tests and show you coverage
# a Makefile can be used for anytjing -  compilation, deleting files, sending emails, making coffee, up to you to configure it
exec: all
	./units && gcov units && gcovr
	