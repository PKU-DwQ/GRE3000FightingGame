#ifndef ARENA_H
#define ARENA_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Arena;
}
QT_END_NAMESPACE

class Arena : public QMainWindow
{
    Q_OBJECT

public:
    Arena(QWidget *parent = nullptr);
    ~Arena();

private:
    Ui::Arena *ui;
};
#endif // ARENA_H
