#include "qt484.h"

Qt484::Qt484(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	initSingalSlot();
}



Qt484::~Qt484()
{

}

void Qt484::initSingalSlot()
{
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(switchWidget()));
}

void Qt484::switchWidget()
{
	if(ui.stackedWidget->currentIndex() == 0) {
		qDebug("false");
		ui.stackedWidget->setCurrentIndex(1);
	}else {
		qDebug("true");
		ui.stackedWidget->setCurrentIndex(0);
	}
}
