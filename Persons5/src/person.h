#ifndef PERSON_H
#define PERSON_H
#include "QFile"
#include <QWidget>
#include "fstream"
#include "QString"
#include "QSpinBox"
#include "QMessageBox"
#include "QDebug"
using namespace std;
struct Parameters_of_person
{
    QString m_name    = "empty string";
    QString m_gender  = "empty string";
    QString m_age     = "empty string";
    QString m_height  = "empty string";
    QString m_weight  = "empty string";
    QString m_choice_nationality = "empty string";
    QString m_day_of_birth   = "empty string";
    QString m_month_of_birth = "empty string";
    QString m_year_of_birth  = "empty string";
    QString m_day_of_death   = "empty string";
    QString m_month_of_death = "empty string";
    QString m_year_of_death  = "empty string";

};
namespace Ui {
class person;
}

class person : public QWidget
{
    Q_OBJECT

public:
    explicit person(QWidget *parent = nullptr);
    ~person();

public slots:
    void add_data();
private:
    int cur_day;
    int cur_month;
    int cur_year;
    Ui::person *ui1;
    Parameters_of_person m_person;
    QVector<QString> m_temp_container;
    char m_person_storage1[9] = "test.ini";
    void enter_name();
    void enter_gender();
    void enter_age();
    void enter_height();
    void enter_weight();
    void enter_nationality();
    void enter_the_date_of_birthday();
    bool person_is_alive();
    void person_is_death();
    void enter_the_date_of_death();
    void create_content_of_file();
    void write_data();
};

#endif // PERSON_H
