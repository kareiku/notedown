#include "mainwindow.h"

NotedownWindow::NotedownWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

NotedownWindow::~NotedownWindow() {
    delete ui;
}
