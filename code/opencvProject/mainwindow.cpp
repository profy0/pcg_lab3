#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QInputDialog>

using namespace cv;

cv::Mat invert_image(cv::Mat const& input)
{
    return 255 - input;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


    ui->pushButton->setEnabled(0);
    ui->pushButton_2->setEnabled(0);
    ui->pushButton_3->setEnabled(0);
    ui->pushButton_4->setEnabled(0);
    ui->pushButton_6->setEnabled(0);
    ui->pushButton_7->setEnabled(0);
    ui->pushButton_8->setEnabled(0);
    ui->pushButton_9->setEnabled(0);
    ui->pushButton_10->setEnabled(0);
    ui->pushButton_11->setEnabled(0);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Mat image2;
    cv::resize(rgbimage, image2, Size(), 1, 1, INTER_CUBIC);

    if(image2.channels() >= 3) {
       Mat ycrcb;
       cvtColor(image2,ycrcb,COLOR_BGR2YCrCb);
       std::vector<Mat> channels;
       split(ycrcb,channels);
       equalizeHist(channels[0], channels[0]);
       Mat result;
       merge(channels,ycrcb);
       cvtColor(ycrcb,result,COLOR_YCrCb2BGR);
       namedWindow("equalizeHist color", 0);
       imshow("equalizeHist color", result);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    equalizeHist(image, hist_equalized_image);
    namedWindow("equalizeHist", 0);
    imshow("equalizeHist", hist_equalized_image);
}

void MainWindow::on_pushButton_3_clicked()
{
    namedWindow("image", 0);
    imshow("image", image);
}

void MainWindow::on_pushButton_4_clicked()
{

    Mat image2;
    cv::resize(image, image2, Size(), 1, 1, INTER_CUBIC);

    uchar mn = 255, mx = 0;

    for(int i=0;i<image.rows;i++) {
        for(int j=0;j<image.cols;j++) {
            uchar x = image.at<uchar>(i,j);
            mn = min(mn, x);
            mx = max(mx, x);
        }
    }

    for(int i=0;i<image.rows;i++) {
        for(int j=0;j<image.cols;j++) {
            int x = image.at<uchar>(i,j);
            image2.at<uchar>(i,j) = (double((double)255 / (mx - mn))) * (x - mn);
        }
    }

    namedWindow("linear contrast", 0);
    imshow("linear contrast", image2);

}

void MainWindow::on_pushButton_5_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this);
    std::string s = filename.toStdString();
    image = imread(s, IMREAD_GRAYSCALE);
    rgbimage = imread(s, IMREAD_COLOR);

    ui->pushButton->setEnabled(1);
    ui->pushButton_2->setEnabled(1);
    ui->pushButton_3->setEnabled(1);
    ui->pushButton_4->setEnabled(1);
    ui->pushButton_6->setEnabled(1);
    ui->pushButton_7->setEnabled(1);
    ui->pushButton_8->setEnabled(1);
    ui->pushButton_9->setEnabled(1);
    ui->pushButton_10->setEnabled(1);
    ui->pushButton_11->setEnabled(1);

}

void MainWindow::on_pushButton_6_clicked()
{
    Mat image2;

    cv::resize(image, image2, Size(), 1, 1, INTER_CUBIC);
    for(int i=0;i<image2.rows;i++) {
        for(int j=0;j<image2.cols;j++) {
            int x = image.at<uchar>(i,j);
            image2.at<uchar>(i,j) = 255 - x;
        }
    }
    namedWindow("negative", 0);
    imshow("negative", image2);
}

void MainWindow::on_pushButton_7_clicked()
{
    Mat image2;

    cv::resize(image, image2, Size(), 1, 1, INTER_CUBIC);

    int k = QInputDialog::getInt(this, "Введите число", "Число: ");

    for(int i=0;i<image2.rows;i++) {
        for(int j=0;j<image2.cols;j++) {
            uchar x = image.at<uchar>(i,j);
            image2.at<uchar>(i,j) = max(0, min(255, x + k));
        }
    }
    namedWindow("add const", 0);
    imshow("add const", image2);
}

void MainWindow::on_pushButton_8_clicked()
{
    Mat image2;

    cv::resize(image, image2, Size(), 1, 1, INTER_CUBIC);

    int k = QInputDialog::getInt(this, "Введите число", "Число: ");

    for(int i=0;i<image2.rows;i++) {
        for(int j=0;j<image2.cols;j++) {
            uchar x = image.at<uchar>(i,j);
            image2.at<uchar>(i,j) = max(0, min(255, x * k));
        }
    }
    namedWindow("mult const", 0);
    imshow("mult const", image2);
}

void MainWindow::on_pushButton_9_clicked()
{
    Mat image2;

    cv::resize(image, image2, Size(), 1, 1, INTER_CUBIC);

    double k = QInputDialog::getDouble(this, "Введите число", "Число: ", 0, 0);

    for(int i=0;i<image2.rows;i++) {
        for(int j=0;j<image2.cols;j++) {
            uchar x = image.at<uchar>(i,j);
            image2.at<uchar>(i,j) = max(0, min(255, (int)pow(x, k)));
        }
    }
    namedWindow("exponentiation", 0);
    imshow("exponentiation", image2);
}

void MainWindow::on_pushButton_10_clicked()
{
    Mat image2;

    cv::resize(image, image2, Size(), 1, 1, INTER_CUBIC);

    uchar mx = 0;

    for(int i=0;i<image2.rows;i++) {
        for(int j=0;j<image2.cols;j++) {
            uchar x = image.at<uchar>(i,j);
            mx = max(mx, x);
        }
    }

    for(int i=0;i<image2.rows;i++) {
        for(int j=0;j<image2.cols;j++) {
            int x = image.at<uchar>(i,j);
            image2.at<uchar>(i,j) = (255 * log(1 + x)) / log(1 + mx);
        }
    }
    namedWindow("log", 0);
    imshow("log", image2);
}

void MainWindow::on_pushButton_11_clicked()
{
    namedWindow("rgb image", 0);
    imshow("rgb image", rgbimage);
}
