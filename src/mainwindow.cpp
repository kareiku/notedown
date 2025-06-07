#include <QSettings>

#include "mainwindow.hpp"
#include "constants.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::showEvent(QShowEvent *event) {
    const QSettings settings(SETTINGS_ORG, SETTINGS_APP);
    this->resize(settings.value("window/size", QSize(800, 600)).toSize());
    this->move(settings.value("window/position", QPoint(100, 100)).toPoint());
}

void MainWindow::closeEvent(QCloseEvent *event) {
    QSettings settings(SETTINGS_ORG, SETTINGS_APP);
    settings.setValue("window/size", this->size());
    settings.setValue("window/position", this->pos());
    settings.sync();
}
