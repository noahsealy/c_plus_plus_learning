CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS = `sdl2-config --cflags --libs` -lSDL2_ttf

main: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o main $(LDFLAGS)

clean:
	rm -f main