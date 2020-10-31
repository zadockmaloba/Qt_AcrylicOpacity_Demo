#include <QtCore/QCoreApplication>
#include <QtWidgets/qapplication.h>
#include "qappwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qAppWindow app;
    app.show();

    return a.exec();
}
