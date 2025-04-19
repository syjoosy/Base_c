CC = gcc
CFLAGS = -Wall -g
OBJ = main.o temp_api.o
TARGET = temp_app

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

main.o: main.c temp_api.h
	$(CC) $(CFLAGS) -c main.c

temp_api.o: temp_api.c temp_api.h
	$(CC) $(CFLAGS) -c temp_api.c

clean:
	rm -f $(OBJ) $(TARGET)