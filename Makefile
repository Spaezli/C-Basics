PROGRAMS = hello memRegions functionPointer array fork pthread 

CFLAGS =  -Wall -Werror -g -O0 

all: $(PROGRAMS)

hello: hello.c
	gcc $(CFLAGS) -o hello hello.c

memRegions: memRegions.c
	gcc $(CFLAGS) -Wno-unused-variable -o memRegions memRegions.c

functionPointer: functionPointer.c
	gcc $(CFLAGS) -o functionPointer functionPointer.c

array: array.c array-2d.c
	gcc $(CFLAGS) -o array array.c
	gcc $(CFLAGS) -o array-2d array-2d.c 



fork: fork1.c fork2.c fork3.c fork4.c
	gcc $(CFLAGS) -o fork1 fork1.c
	gcc $(CFLAGS) -o fork2 fork2.c
	gcc $(CFLAGS) -o fork3 fork3.c
	gcc $(CFLAGS) -o fork4 fork4.c

pthread: pthread1.c pthread2.c pthread3-lock.c
	gcc $(CFLAGS) -o pthread1 pthread1.c -lpthread -lm
	gcc $(CFLAGS) -o pthread2 pthread2.c -lpthread -lm
	gcc $(CFLAGS) -o pthread3-lock pthread3-lock.c -lpthread -lm



#test-phase1: memory_simulation.c test-phase1.c
#	gcc $(CFLAGS) -o test-phase1 memory_simulation.c free_frame_list.c page_table.c tlb.c -lpthread test-phase1.c -lm
#test-phase2: memory_simulation.c test-phase2.c
#	gcc $(CFLAGS) -o test-phase2 memory_simulation.c free_frame_list.c page_table.c tlb.c -lpthread -pthread test-phase2.c -lm



clean:
	rm -f $(PROGRAMS)
	rm -f array2d
	rm -f fork1 fork2 fork3 fork4
	rm -f pthread1 pthread2 pthread3-lock
	rm -f *.o
	rm -f fork4.output





# EXEC = clean memory_simulation memory_test

# CFLAGS = -Wall -Werror -g -O0 -Wno-unused-variable


# all: $(EXEC)

# memory_simulation: memory_simulation
# 	gcc $(CFLAGS) -o memory_simulation  memory_simulation.c -lpthread -lm

# #test-phase1: test-phase1
# # 	gcc $(CFLAGS) -o test-phase1 test-phase1.c -lpthread -lm


# memory_test: memory_test.c memory_simulation
# 	gcc $(CFLAGS) -o memory_test memory_test.c memory_simulation.c -lpthread -lm


# #test-phase2: memory_simulation.c test-phase2.c
# #	gcc $(CFLAGS) -o test-phase2  memory_simulation.c -lpthread -pthread test-phase2.c
# clean:
# 	rm -f $(EXEC)
# 	rm -f *~

