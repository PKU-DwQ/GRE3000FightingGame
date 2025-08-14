#include "arena.h"
#include "./ui_arena.h"

Arena::Arena(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Arena)
{
    ui->setupUi(this);
}

Arena::~Arena()
{
    delete ui;
}
