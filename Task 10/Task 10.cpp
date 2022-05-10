#include "Human.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Student a("Журченко", "Юлий", "Никонович", 25, true);

	Boss b("Зорин", "Николай", "Владимирович", 48, 3);

	a.print();
	b.print();

	return 0;
}