/********************************************************************************
** Form generated from reading UI file 'qt484.ui'
**
** Created: Sat Apr 6 18:08:51 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT484_H
#define UI_QT484_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <phonon/seekslider.h>
#include <phonon/videoplayer.h>
#include <phonon/volumeslider.h>

QT_BEGIN_NAMESPACE

class Ui_Qt484Class
{
public:
    QAction *actionOpen;
    QAction *actionPlay;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *picWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox;
    QWidget *videoWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *leftPanel;
    Phonon::VideoPlayer *leftVideoPlayer;
    QHBoxLayout *leftToolBarPanel;
    QPushButton *leftPlay;
    Phonon::SeekSlider *seekSlider;
    Phonon::VolumeSlider *volumeSlider;
    QVBoxLayout *rightPanel;
    Phonon::VideoPlayer *rightVideoPlayer;
    QHBoxLayout *rightToolBarPanel;
    QPushButton *rightPlay;
    Phonon::SeekSlider *seekSlider_2;
    Phonon::VolumeSlider *volumeSlider_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Qt484Class)
    {
        if (Qt484Class->objectName().isEmpty())
            Qt484Class->setObjectName(QString::fromUtf8("Qt484Class"));
        Qt484Class->resize(633, 514);
        actionOpen = new QAction(Qt484Class);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionOpen->setCheckable(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Qt484/Resources/icon/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionPlay = new QAction(Qt484Class);
        actionPlay->setObjectName(QString::fromUtf8("actionPlay"));
        centralWidget = new QWidget(Qt484Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMaximumSize(QSize(900, 16777215));
        picWidget = new QWidget();
        picWidget->setObjectName(QString::fromUtf8("picWidget"));
        verticalLayoutWidget = new QWidget(picWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 471, 381));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_2->addWidget(comboBox);

        stackedWidget->addWidget(picWidget);
        videoWidget = new QWidget();
        videoWidget->setObjectName(QString::fromUtf8("videoWidget"));
        layoutWidget = new QWidget(videoWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 612, 436));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        leftPanel = new QVBoxLayout();
        leftPanel->setSpacing(6);
        leftPanel->setObjectName(QString::fromUtf8("leftPanel"));
        leftVideoPlayer = new Phonon::VideoPlayer(layoutWidget);
        leftVideoPlayer->setObjectName(QString::fromUtf8("leftVideoPlayer"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leftVideoPlayer->sizePolicy().hasHeightForWidth());
        leftVideoPlayer->setSizePolicy(sizePolicy1);
        leftVideoPlayer->setMinimumSize(QSize(300, 400));

        leftPanel->addWidget(leftVideoPlayer);

        leftToolBarPanel = new QHBoxLayout();
        leftToolBarPanel->setSpacing(6);
        leftToolBarPanel->setObjectName(QString::fromUtf8("leftToolBarPanel"));
        leftPlay = new QPushButton(layoutWidget);
        leftPlay->setObjectName(QString::fromUtf8("leftPlay"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Qt484/Resources/icon/play.png"), QSize(), QIcon::Normal, QIcon::On);
        leftPlay->setIcon(icon1);

        leftToolBarPanel->addWidget(leftPlay);

        seekSlider = new Phonon::SeekSlider(layoutWidget);
        seekSlider->setObjectName(QString::fromUtf8("seekSlider"));

        leftToolBarPanel->addWidget(seekSlider);

        volumeSlider = new Phonon::VolumeSlider(layoutWidget);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setLayoutDirection(Qt::LeftToRight);
        volumeSlider->setOrientation(Qt::Horizontal);

        leftToolBarPanel->addWidget(volumeSlider);


        leftPanel->addLayout(leftToolBarPanel);


        horizontalLayout_2->addLayout(leftPanel);

        rightPanel = new QVBoxLayout();
        rightPanel->setSpacing(6);
        rightPanel->setObjectName(QString::fromUtf8("rightPanel"));
        rightVideoPlayer = new Phonon::VideoPlayer(layoutWidget);
        rightVideoPlayer->setObjectName(QString::fromUtf8("rightVideoPlayer"));
        sizePolicy1.setHeightForWidth(rightVideoPlayer->sizePolicy().hasHeightForWidth());
        rightVideoPlayer->setSizePolicy(sizePolicy1);
        rightVideoPlayer->setMinimumSize(QSize(300, 400));
        rightVideoPlayer->setMaximumSize(QSize(300, 400));

        rightPanel->addWidget(rightVideoPlayer);

        rightToolBarPanel = new QHBoxLayout();
        rightToolBarPanel->setSpacing(6);
        rightToolBarPanel->setObjectName(QString::fromUtf8("rightToolBarPanel"));
        rightPlay = new QPushButton(layoutWidget);
        rightPlay->setObjectName(QString::fromUtf8("rightPlay"));
        rightPlay->setIcon(icon1);

        rightToolBarPanel->addWidget(rightPlay);

        seekSlider_2 = new Phonon::SeekSlider(layoutWidget);
        seekSlider_2->setObjectName(QString::fromUtf8("seekSlider_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(seekSlider_2->sizePolicy().hasHeightForWidth());
        seekSlider_2->setSizePolicy(sizePolicy2);

        rightToolBarPanel->addWidget(seekSlider_2);

        volumeSlider_2 = new Phonon::VolumeSlider(layoutWidget);
        volumeSlider_2->setObjectName(QString::fromUtf8("volumeSlider_2"));
        volumeSlider_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        volumeSlider_2->setSingleStep(1);

        rightToolBarPanel->addWidget(volumeSlider_2);


        rightPanel->addLayout(rightToolBarPanel);


        horizontalLayout_2->addLayout(rightPanel);

        stackedWidget->addWidget(videoWidget);

        verticalLayout->addWidget(stackedWidget);

        Qt484Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qt484Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 633, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Qt484Class->setMenuBar(menuBar);
        toolBar = new QToolBar(Qt484Class);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Qt484Class->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionOpen);
        toolBar->addAction(actionOpen);

        retranslateUi(Qt484Class);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Qt484Class);
    } // setupUi

    void retranslateUi(QMainWindow *Qt484Class)
    {
        Qt484Class->setWindowTitle(QApplication::translate("Qt484Class", "Qt484", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Qt484Class", "Open", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("Qt484Class", "Open Video File", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPlay->setText(QApplication::translate("Qt484Class", "Play", 0, QApplication::UnicodeUTF8));
        leftPlay->setText(QString());
        rightPlay->setText(QString());
        menuFile->setTitle(QApplication::translate("Qt484Class", "File", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("Qt484Class", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Qt484Class: public Ui_Qt484Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT484_H
