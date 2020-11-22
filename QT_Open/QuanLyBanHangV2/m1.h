#ifndef M1_H
#define M1_H

#include <QMainWindow>

namespace Ui {
class M1;
}

class M1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit M1(QWidget *parent = nullptr);
    ~M1();

private:
    Ui::M1 *ui;
};

#endif // M1_H
