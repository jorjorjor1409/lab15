#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d) {
    int numbers[] = {a, b, c, d};
    int size = 4;

    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(numbers[i], numbers[j]);
    }

	a = numbers[0];
    b = numbers[1];
    c = numbers[2];
    d = numbers[3];
    
}