#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ETM.h"
#include <QtWidgets/QMainWindow>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <qdebug.h>
#include<iostream>
#include "SignUp.h"
#include "Dashboard.h"


class ETM : public QMainWindow
{
    Q_OBJECT

public:
    ETM(QWidget *parent = Q_NULLPTR);
  //  bool isPasswordValid(QString password);

private:
    Ui::ETM ui;
    bool passwordValid;
    SignUp* signUp;
    Dashboard* dashboard;
private slots:
    void on_login_btn_clicked();
    void on_tosignup_btn_clicked();

};
