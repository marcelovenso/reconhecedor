#include "processamentoimagem.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ProcessamentoImagem w;
    w.show();

    return a.exec();
}
