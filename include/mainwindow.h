#pragma once

#include <ui_mainwindow.h>

class NotedownWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit NotedownWindow(QWidget *parent = nullptr);

    ~NotedownWindow() override;

private:
    Ui::MainWindow *ui;
};
