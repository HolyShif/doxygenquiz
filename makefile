CC = g++
CFLAGS = -Wall
EXEC = executable
OBJS = course.o collegemain.o college.o
INCLUDES = college.h course.h node.h tarray.h
IMPLEM = collegemain.cc course.cc college.cc

all: build doczip

clean:
	-rm *.o
	-rm core
	-rm *.core
	-rm *.class
	-rm $(EXEC)
	-rm -r html latex
build: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@
.c.o:
	$(CC) $(CFLAGS) -c $<
html/index.html: $(IMPLEM) $(INCLUDES)
	doxygen configfile
doc:html/index.html
myexe: $(EXEC)
doczip: doc
	tar -cvf $(EXEC).tgz $(INCLUDES) $(IMPLEM) makefile html
