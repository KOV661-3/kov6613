#ifndef CAL_H
#define CAL_H

#include <QDialog>

namespace Ui {
class Cal;
}

class Cal : public QDialog
{
    Q_OBJECT

public:
    explicit Cal(QWidget *parent = 0);
    ~Cal();

public slots:
private slots:
    void on_push7_clicked();

    void on_push8_clicked();

    void on_push9_clicked();

    void on_push4_clicked();

    void on_push5_clicked();

    void on_push6_clicked();

    void on_push1_clicked();

    void on_push2_clicked();

    void on_push3_clicked();

    void on_push0_clicked();

    void on_pushBackspace_clicked();

    void on_pushCLean_clicked();

    void on_pushMUnis_clicked();

    void on_pushPLus_clicked();

    void on_pushYmnoji_clicked();

    void on_pushdele_clicked();

    void on_pushBlanc_clicked();

    void on_pushXVN_clicked();

    void on_pushsqt_clicked();

    void on_pushFACT_clicked();

private:
    Ui::Cal *ui;
};

#endif // CAL_H
