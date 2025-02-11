all: taskmanager

processes.o: processes.c processes.h
	gcc -c processes.c

taskmanager.o: taskmanager.c processes.h
	gcc -c taskmanager.c

taskmanager: processes.o taskmanager.o
	gcc -o taskmanager processes.o taskmanager.o

clean:
	rm -f taskmanager processes.o taskmanager.o