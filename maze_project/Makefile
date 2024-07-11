cc = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
LDFLAGS = -lSDL2
OBJFILES = main.o utils.o draw.o
TARGET = maze

all: $(TARGET)

$(TARGET): $(OBJFILES)
	(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

main.o: src/main.c include/main.h
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o
utils.o: src/utils.c include/main.h
	$(CC) $(CFLAGS) -c src/utils.c -o src/utils.o
draw.o: src/draw.c include/main.h
	$(CC) $(CFLAGS) -c src/draw.c -o src/draw.c

clean:
	rm -f $(OBJFILES) $(TARGET)
.PHONY: all clean
