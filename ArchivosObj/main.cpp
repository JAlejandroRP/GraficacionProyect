#include <stdio.h>
#include "Object.h"
#include <fstream>
#include "Reader.h"

using namespace std;

int main(int argc, char **argv)
{
    Reader file1("monkey.obj");
    file1.ReadFile();
    file1.ShowObjects();
	return 0;
}
