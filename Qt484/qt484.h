#ifndef QT484_H
#define QT484_H

#include <QtGui/QMainWindow>
#include "ui_qt484.h"

class Qt484 : public QMainWindow
{
	Q_OBJECT

public:
	Qt484(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Qt484();

private slots:
	void switchWidget();

private:
	Ui::Qt484Class ui;
	void initSingalSlot();
	
};

#endif // QT484_H
