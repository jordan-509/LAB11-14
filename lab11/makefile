CC=gcc
OBj=max1.o min1.o var.o

ifeq ($(DEBUG),yes)
CC_OPTIONS=-g -W -Wall

else 
CC_OPTIONS=

endif

install: My_binaire
	sudo mv  My_binaire $(HOME)/

My_binaire: min1.o max1.o var.o testf.o
	${CROSS_COMPILE}${CC}  ${CC_OTIONS}  min1.o max1.o var.o testf.o -o My_binaire 
ifeq ($(DEBUG),yes)
	@echo "mode debug"
else 
	@echo "mode realase"
endif 	
#max1.o: max1.c max1.h 
#	${CROSS_COMPILE}${CC}  ${CC_OPTIONS}  -c max1.c 

#min.o: min1.c  min1.h
#	${CROSS_COMPILE}${CC} -Wall -c min1.c    


#var.o: var.c var.h 
#	${CROSS_COMPILE}${CC} -Wall -c var.c

#testf.o: testf.c
#	${CROSS_COMPILE}${CC} -Wall -c testf.c 

clean :
	${CROSS_COMPILE}rm -f *.o

%.o : %.c
	${CROSS_COMPILE}${CC} ${CC_OPTIONS} -c $^ -o $@
	




