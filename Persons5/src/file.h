#ifndef FILE_H
#define FILE_H

#include <QWidget>
#include "iostream"
#include "fstream"
#include "ui_person.h"
#include "person.h"
#include "time.h"
using namespace  std;
QT_BEGIN_NAMESPACE
namespace Ui { class file; }
QT_END_NAMESPACE

class file : public QWidget
{
    Q_OBJECT

public:
    file(QWidget *parent = nullptr);
    ~file();

public slots:
    void read_file();
    void add();
private:
    char m_person_storage[9] = "test.ini";
    person m_widget_person;
    Ui::file *ui;
};
#endif // FILE_H
