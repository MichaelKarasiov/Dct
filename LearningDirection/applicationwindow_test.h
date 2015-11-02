#ifndef APPLICATIONWINDOW_TEST_H
#define APPLICATIONWINDOW_TEST_H

#include <QWidget>
#include "learningdirectionwidget.h"
namespace Ui {
class ApplicationWindow_test;
}

class ApplicationWindow_test : public QWidget
{
    Q_OBJECT
    LearningDirection *LD;
LearningDirectionWidget *LDWidget;
public:
    explicit ApplicationWindow_test(QWidget *parent = 0);
    ~ApplicationWindow_test();
private:
    Ui::ApplicationWindow_test *ui;
};

#endif // APPLICATIONWINDOW_TEST_H
