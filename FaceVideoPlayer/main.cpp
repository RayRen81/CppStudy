#include "facevideoplayer.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FaceVideoPlayer w;
	w.show();
	return a.exec();
}
