#include "cal.h"
#include "ui_cal.h"
#include <math.h>
#include <QString>

double m=0,b=0;
QString str,num;

Cal::Cal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cal)
{
    ui->setupUi(this);
}

Cal::~Cal()
{
    delete ui;
}

void Cal::on_push1_clicked()
{
    num.append('1');
    ui->lineEdit->setText(QString(num));
    str.append('1');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push2_clicked()
{
    num.append('2');
    ui->lineEdit->setText(QString(num));
    str.append('2');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push3_clicked()
{
    num.append('3');
    ui->lineEdit->setText(QString(num));
    str.append('3');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push4_clicked()
{
    num.append('4');
    ui->lineEdit->setText(QString(num));
    str.append('4');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push5_clicked()
{
    num.append('5');
    ui->lineEdit->setText(QString(num));
    str.append('5');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push6_clicked()
{
    num.append('6');
    ui->lineEdit->setText(QString(num));
    str.append('6');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push7_clicked()
{
    num.append('7');
    ui->lineEdit->setText(QString(num));
    str.append('7');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push8_clicked()
{
    num.append('8');
    ui->lineEdit->setText(QString(num));
    str.append('8');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push9_clicked()
{
    num.append('9');
    ui->lineEdit->setText(QString(num));
    str.append('9');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_push0_clicked()
{

    num.append('0');
    ui->lineEdit->setText(QString(num));
    str.append('0');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_pushFACT_clicked()
{
    num.append('.');
    ui->lineEdit->setText(QString(num));
    str.append('.');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_pushBackspace_clicked()
{
    num.chop(1);
    ui->lineEdit->setText(QString(num));
    str.chop(1);
    ui->lineEdit_2->setText(QString(str));

}

void Cal::on_pushCLean_clicked()
{
    b=0;
    m=0;
    num.clear();
    ui->lineEdit->setText(QString(num));
    str.clear();
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_pushMUnis_clicked()
{
    double a;
    a=num.toDouble();
    if(m==2)
    {
        a=a+b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==1)
    {
        a=b-a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==3)
    {
        a=a*b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==4)
    {
        a=b/a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==5)
    {
        a=pow(b,a);
        ui->lineEdit->setText(QString::number(a));
    }
    if(m==6)
    {
        a=pow(b,(double)(1)/(double)(a));
        ui->lineEdit->setText(QString::number(a));
    }
    m=1;
    b=a;
    num.clear();
    str.append('-');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_pushPLus_clicked()
{
    double a;
    a=num.toDouble();
    if(m==2)
    {
        a=a+b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==1)
    {
        a=b-a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==3)
    {
        a=a*b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==4)
    {
        a=b/a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==5)
    {
        a=pow(b,a);
        ui->lineEdit->setText(QString::number(a));
    }
    if(m==6)
    {
        a=pow(b,(double)(1)/(double)(a));
        ui->lineEdit->setText(QString::number(a));
    }
    m=2;
    b=a;
    num.clear();
    str.append('+');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_pushYmnoji_clicked()
{
    double a;
    a=num.toDouble();
    if(m==2)
    {
        a=a+b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==1)
    {
        a=b-a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==3)
    {
        a=a*b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==4)
    {
        if(a==0) ui->lineEdit->setText(QString("inf"));
        else
        {
        a=b/a;
        ui->lineEdit->setText(QString::number(a));
        }
    }
    if(m==5)
    {
        a=pow(b,a);
        ui->lineEdit->setText(QString::number(a));
    }
    if(m==6)
    {
        a=pow(b,(double)(1)/(double)(a));
        ui->lineEdit->setText(QString::number(a));
    }
    m=3;
    b=a;
    num.clear();
    str.append('*');
    ui->lineEdit_2->setText(QString(str));
}


void Cal::on_pushdele_clicked()
{
    double a;
    a=num.toDouble();
    if(m==2)
    {
        a=a+b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==1)
    {
        a=b-a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==3)
    {
        a=a*b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==4)
    {
        if(a==0) ui->lineEdit->setText(QString("inf"));
        else
        {
        a=b/a;
        ui->lineEdit->setText(QString::number(a));
        }
     }
    if(m==5)
    {
        a=pow(b,a);
        ui->lineEdit->setText(QString::number(a));
    }
    if(m==6)
    {
        a=pow(b,(double)(1)/(double)(a));
        ui->lineEdit->setText(QString::number(a));
    }
    m=4;
    b=a;
    num.clear();
    str.append('/');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_pushBlanc_clicked()
{
    double a;
    a=num.toDouble();
    if(m==2)
    {
        a=a+b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==1)
    {
        a=b-a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==3)
    {
        a=a*b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==4)
    {
        a=b/a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==5)
    {
        a=pow(b,a);
        ui->lineEdit->setText(QString::number(a));
    }
    if(m==6)
    {
        a=pow(b,(double)(1)/(double)(a));
        ui->lineEdit->setText(QString::number(a));
    }
    b=a;
    m=0;
    num.setNum(b);
    str.setNum(b);
    ui->lineEdit_2->setText(QString(str));

}

void Cal::on_pushXVN_clicked()
{
    double a;
    a=num.toDouble();
    if(m==2)
    {
        a=a+b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==1)
    {
        a=b-a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==3)
    {
        a=a*b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==4)
    {
        a=b/a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==5)
    {
        a=pow(b,a);
        ui->lineEdit->setText(QString::number(a));
    }
    if(m==6)
    {
        a=pow(b,(double)(1)/(double)(a));
        ui->lineEdit->setText(QString::number(a));
    }
    m=5;
    b=a;
    num.clear();
    str.append('^');
    ui->lineEdit_2->setText(QString(str));
}

void Cal::on_pushsqt_clicked()
{
    double a;
    a=num.toDouble();
    if(m==2)
    {
        a=a+b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==1)
    {
        a=b-a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==3)
    {
        a=a*b;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==4)
    {
        a=b/a;
        ui->lineEdit->setText(QString::number(a));
     }
    if(m==5)
    {
        a=pow(b,a);
        ui->lineEdit->setText(QString::number(a));
    }
    if(m==6)
    {
        a=pow(b,(double)(1)/(double)(a));
        ui->lineEdit->setText(QString::number(a));
    }
    m=6;
    b=a;
    str.prepend	("sqrt");
    ui->lineEdit_2->setText(QString(str));
}



