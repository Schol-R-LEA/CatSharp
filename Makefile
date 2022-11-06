CC=gcc
CFLAGS= -g
LDFLAGS=
SRC=$(wildcard src/*.c)
HDR=$(wildcard include/*.h)
OBJ=$(SRC:.c=.o)
EXEC=cats

all: $(SRC) $(OBJ) $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm src/*. o