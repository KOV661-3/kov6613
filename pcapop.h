#ifndef PCAPOP_H
#define PCAPOP_H

#include <QMainWindow>
#include "pcap.h"

namespace Ui {
class Pcapop;

}

class Pcapop : public QMainWindow
{
    Q_OBJECT

public:
    explicit Pcapop(QWidget *parent = 0);
    ~Pcapop();
public slots:
        void Fopene();
        void PushContent();
private:
    Ui::Pcapop *ui;
};

#endif // PCAPOP_H
