CC=gcc
CFLAGS= -c -g
LDFLAGS= -g
SRC=$(wildcard src/*.c)
HDR=$(wildcard include/*.h)
OBJ=$(SRC:.c=.o)
EXEC=cat#

all: $(SRC) $(OBJ) $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.c $(HDR)
	$(CC) $(LDFLAGS) $< -o $@

clean:
	rm *.o $(EXEC)