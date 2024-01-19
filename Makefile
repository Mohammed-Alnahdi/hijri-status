CC = cc
target := *.c
flag := -o
result = hijri
all: compile

compile:
		${CC} ${target} ${flag} ${result}

install: compile
		@echo "Adding file to /bin directory..."
	        cp -v ${result} /usr/bin/
uninstall:
	rm -f /usr/bin/${result}
