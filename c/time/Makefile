CC=gcc
C_OPTS=-O2
LIBS=-lrt -lpthread

all:
	$(CC) time.c -o time $(C_OPTS) $(LIBS) 
	$(CC) ftime.c -o ftime $(C_OPTS) $(LIBS)
	$(CC) gettimeofday.c -o gettimeofday $(C_OPTS) $(LIBS)
	$(CC) clock_gettime.c -o clock_gettime $(C_OPTS) $(LIBS)
	$(CC) cached_time.c -o cached_time $(C_OPTS) $(LIBS)

run:
	./time
	./ftime
	./gettimeofday
	./clock_gettime
	./cached_time

clean:
	rm -f *.o
	rm -f time
	rm -f ftime 
	rm -f gettimeofday
	rm -f clock_gettime
	rm -f cached_time

