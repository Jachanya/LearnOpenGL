CXX = clang
LIBS = -lglfw3 -lopengl32 -luser32 -lgdi32 -lkernel32 -lshell32 -lvcruntime -lmsvcrtd -l libcmt
LDFLAGS = -L lib/
SRC := $(wildcard src/*.c)

run: main
	debug/main.exe

main: main.cpp
	$(CXX) main.cpp -I include/ $(SRC) $(LDFLAGS) $(LIBS) -o debug/main.exe

clean:
	rm -rf debug