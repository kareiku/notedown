#include "mainwindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    NotedownWindow window;
    window.show();

    return QApplication::exec();
}
