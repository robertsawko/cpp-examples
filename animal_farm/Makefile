
all: vector_of_unique_ptr vector_of_ptr old_style

vector_of_unique_ptr : vector_of_unique_ptr.cpp Animals.cpp
	g++ -std=c++14 $? -o $@

vector_of_ptr : vector_of_ptr.cpp Animals.cpp
	g++ -std=c++11 $? -o $@

old_style : old_style.cpp Animals.cpp
	g++ $? -o $@

clean : vector_of_unique_ptr vector_of_ptr old_style
	rm $?
