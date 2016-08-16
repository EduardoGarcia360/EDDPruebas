#ifndef MAINPRUEBA_H
#define MAINPRUEBA_H

#include <QMainWindow>

namespace Ui {
class MainPrueba;
}

class MainPrueba : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainPrueba(QWidget *parent = 0);
    ~MainPrueba();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainPrueba *ui;
};

#endif // MAINPRUEBA_H
