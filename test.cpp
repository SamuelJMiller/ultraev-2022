#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void mutateInt(int one, int two, int thr, int four, int five) {
	cout << "\n" << one * one << " " << two * two << " " << thr * thr << " " << four * four << " " << five * five << "\n" << endl;
}

class Fruits {
    public:
        int colorCode;
        int sizeInches;
        int timeToMature;
        Fruits(int x, int y, int z) {
            colorCode = x;
            sizeInches = y;
            timeToMature = z;
        }
};

int main() {
	cout << "Inside main" << endl;

	int x = 0; //var 200
	int y = 12; //var 30

	int i = 23, j = 56; //var 30 30

	Fruits apple( 13, 5, 2 );//con-call 500 500 500

	mutateInt( 8, 54, 7, 12, 9 ); //fcall 20 20 20 20 20

	mutateInt( 12, 16, 5, 33, 6 );//fcall 1000 1000 1000 1000 1000

	return 0;
}

