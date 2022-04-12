#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QTimer>
#include <QDebug>

#include "personaje.h"


#include <QJsonArray>
#include <QMainWindow>
#include <QGraphicsScene>
#include <iostream>
#include "fstream"
#include <string>
#include <QKeyEvent>
#include <QList>
#include <QTimer>
#include <QDebug>
#include <QGraphicsItem>
#define tam 40

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
