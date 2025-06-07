#pragma once

#include <ui_mainwindow.h>

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};
