#ifndef PROCESSAMENTOIMAGEM_H
#define PROCESSAMENTOIMAGEM_H

#include <QMainWindow>

namespace Ui {
class ProcessamentoImagem;
}

class ProcessamentoImagem : public QMainWindow
{
    Q_OBJECT

public:
    explicit ProcessamentoImagem(QWidget *parent = 0);
    ~ProcessamentoImagem();

private slots:
    void on_botaoAbreCamera_clicked();

    void on_botaoFechar_clicked();

private:
    Ui::ProcessamentoImagem *ui;
};

#endif // PROCESSAMENTOIMAGEM_H
