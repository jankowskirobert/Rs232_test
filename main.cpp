#include "mainwindow.h"
#include <QApplication>
#include "ArduinoSerialCommunicator.h"
#include <stdio.h>
#include <string>
#include <opencv2/opencv.hpp>
#include <chrono>
#include <thread>
#include "rs232.h"

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    ArduinoSerialCommunicator arduinoCOM6("/dev/ttyACM0");
    if (!arduinoCOM6.isOpened())
    {
        std::cout << "Could not open COM port" << std::endl;
        return(-5);
    }


    //Stabilize communication
    std::this_thread::sleep_for(std::chrono::milliseconds(2000));

    return 0;
//    return a.exec();
}
