#include "qt484.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qt484 w;
	w.show();
	return a.exec();
}
