CXX = clang
LIBS = -lglfw3 -lopengl32 -luser32 -lgdi32 -lkernel32 -lshell32 -lvcruntime -lmsvcrtd -l libcmt
LDFLAGS = -L lib/

SRC := $(wildcard src/*.cpp) 
SRC += $(wildcard src/*.hpp) 
SRC += $(wildcard src/*.c)

#DEP += $(filter %.c, $(SRC))
DEP += $(filter %.cpp, $(SRC))
DEP += $(filter %.hpp, $(SRC))



run: main
	a.exe

main: $(DEP)
	$(CXX) main.cpp -I include $(SRC) $(LDFLAGS) $(LIBS)

clean:
	rm -rf debug