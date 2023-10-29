bin/dinochrome : src/mortalkombat.cpp include/*.hpp
	c++ src/mortalkombat.cpp -I include -o bin/dinochrome -lcurses

run: bin/mortalkombat
	./bin/mortalkombat