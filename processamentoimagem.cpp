#include "processamentoimagem.h"
#include "ui_processamentoimagem.h"
#include "cv.h"
#include "highgui.h"

ProcessamentoImagem::ProcessamentoImagem(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ProcessamentoImagem)
{
    ui->setupUi(this);
}

ProcessamentoImagem::~ProcessamentoImagem()
{
    delete ui;
}

void ProcessamentoImagem::on_botaoAbreCamera_clicked()
{
    cv::namedWindow("Webcam");
    cv::VideoCapture cap(0);
    cv::Mat frame;

    if(cap.isOpened()){
        ui->labelAviso->setText("Camera OK...");
    }else{
        ui->labelAviso->setText("ERRO: A camera nao esta conectada.");
    }

    do{
        cap >> frame;
        imshow("Webcam",frame);
    }while(cv::waitKey(30)<0);

    cv::destroyAllWindows();
}

void ProcessamentoImagem::on_botaoFechar_clicked()
{
    exit(EXIT_SUCCESS);
}
