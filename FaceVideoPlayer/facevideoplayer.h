#ifndef FACEVIDEOPLAYER_H
#define FACEVIDEOPLAYER_H

#include <QtGui/QMainWindow>
#include "ui_facevideoplayer.h"

class FaceVideoPlayer : public QMainWindow
{
	Q_OBJECT

public:
	FaceVideoPlayer(QWidget *parent = 0, Qt::WFlags flags = 0);
	~FaceVideoPlayer();

private:
	Ui::FaceVideoPlayerClass ui;
};

#endif // FACEVIDEOPLAYER_H
