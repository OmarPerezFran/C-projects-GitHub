#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int input;
	cin>> input;
	int i;
	for(i=input;i<=input+100;i+=2)
	{//Notemos que escribir i+=2 es similar a escribir i = i + 2
		cout << i << endl;
	}
	
	return 0;
}

