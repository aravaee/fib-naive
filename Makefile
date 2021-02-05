PROG = main
CC = g++
CPPFLAGS = -g -Wall
OBJS = main.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

clean:
	rm -f core $(PROG) $(OBJS)