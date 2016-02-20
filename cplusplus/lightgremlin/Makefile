# file: GNUMakefile
#

# define a target for the application
#
all: foo

# define a target to link the application
#
foo: foo.o
	g++ -lm foo.o -o foo

# define a target to compile the application
#
foo.o: foo.cc
	g++ -O2 -std=c++11 -pedantic -Wall -Wextra -Wcast-align -Wcast-qual -Wctor-dtor-privacy -Wdisabled-optimization -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wnoexcept -Wold-style-cast -Woverloaded-virtual -Wredundant-decls -Wshadow -Wsign-promo -Wstrict-null-sentinel -Wstrict-overflow=5 -Wswitch-default -Wundef -Wno-unused -c foo.cc -o foo.o

# define a target to clean the directory
#
clean:
	rm -f foo.o
	rm -f foo


#
# end of file


