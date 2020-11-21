CC = gcc
CFLAGS =
libs = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

output = output
output_dir = out

src_dir = src

scenes = Menu
scenes_obj := $(shell for i in $(scenes); do echo $(src_dir)/$$i/$$i.o; done | xargs)

.PHONY: all clean
all: $(output_dir)/$(output) clean

$(output_dir)/$(output): $(src_dir)/main.o $(scenes_obj) $(output_dir)
	$(CC) $(src_dir)/main.o $(scenes_obj) -o $(output_dir)/$(output) $(libs)

$(output_dir):
	mkdir $(output_dir)

$(src_dir)/main.o: $(src_dir)/main.c
	$(CC) -c $(src_dir)/main.c -o $(src_dir)/main.o

$(src_dir)/%/%.o: $(src_dir)/%/%.c
	$(CC) -c .c


clean:
	find . -name "*.o" -delete
