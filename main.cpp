#include <cstdlib>
#include <conio2.h>
#include "Juego.h"
#include "Auto.h"
#include "Auto1.h"
#include "Auto2.h"
#include "Auto3.h"
using namespace std;

int main (int argc, char *argv[]) {
	srand(time(NULL));
	Juego J;
	J.play();
	return 0;
}


