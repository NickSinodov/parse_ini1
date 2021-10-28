#include "person.h"
#include "ui_person.h"
person::person(QWidget *parent) :
    QWidget(parent),
    ui1(new Ui::person)
{
    ui1->setupUi(this);
    time_t t2;
    time(&t2);
    tm *t1 = localtime(&t2);

    cur_day   = t1->tm_mday;
    cur_month = t1->tm_mon + 1;
    cur_year  = t1->tm_year + 1900;
    ui1->lineEdit_2->setValidator(new QIntValidator(1,100, ui1->lineEdit_2));
    ui1->lineEdit_3->setValidator(new QIntValidator(50, 200, ui1->lineEdit_3));
    ui1->lineEdit_4->setValidator(new QIntValidator(4, 100, ui1->lineEdit_4));
    ui1->lineEdit_6->setValidator(new QIntValidator(0, cur_year, ui1->lineEdit_6));
    ui1->lineEdit_10->setValidator(new QIntValidator(1, cur_month, ui1->lineEdit_10));
    ui1->lineEdit_5->setValidator(new QIntValidator(1, cur_day, ui1->lineEdit_5));
    ui1->lineEdit_7->setValidator(new QIntValidator(0, cur_year, ui1->lineEdit_7));
    ui1->lineEdit_9->setValidator(new QIntValidator(1, cur_month, ui1->lineEdit_9));
    ui1->lineEdit_8->setValidator(new QIntValidator(1, cur_day, ui1->lineEdit_8));
    connect(ui1->pushButton, &QPushButton::clicked, this, &person::add_data);
}

void person::enter_name()
{
    m_person.m_name = ui1->lineEdit->text();
}

void person::enter_gender()
{
    m_person.m_gender = ui1->comboBox_2->currentText();
}

void person::enter_age()
{
     QString age = 0;
     age = ui1->lineEdit_2->text();
     QMessageBox msgBox;
     if(age.toInt() <= 0 || age.toInt() > 100)
     {
         msgBox.setText(tr("Incorrect data\n"
                            "The age can't be more than 100 years or less than zero\n"
                            "Enter the age of %1").arg(m_person.m_name));
         msgBox.exec();
         return;

     }
     else
     {
        m_person.m_age = age;
     }
}

void person::enter_height()
{
    QString height = 0;
    height = ui1->lineEdit_3->text();
    QMessageBox msgBox;
    if(m_person.m_age.toInt() == 1)
    {
        if(height.toInt() < 51 || height.toInt() > 76)
        {
            msgBox.setText(tr("Incorrect data\n"
                           "The height of %1 in 1 year can't be less than 51 cm or more than 76 cm\n"
                           "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_height = height;
        }
    }
    else if(m_person.m_age.toInt() > 1 && m_person.m_age.toInt() <= 3)
    {
        if(height.toInt() < 76 || height.toInt() > 96)
        {
            msgBox.setText(tr("Incorrect data\n"
                           "The height of %1 from 1 year to 3 years can't be less than 76 cm or more than 96 cm\n"
                           "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_height = height;
        }
    }
    else if(m_person.m_age.toInt() > 3 && m_person.m_age.toInt() <= 10)
    {
        if(height.toInt() < 96 || height.toInt() > 138)
        {
            msgBox.setText(tr("Incorrect data\n"
                           "The height of %1 from 3 years to 10 years can't be less than 96 cm or more than 138 cm\n"
                           "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_height = height;
        }
    }
    else if(m_person.m_age.toInt() > 10 && m_person.m_age.toInt() <= 15)
    {
        if(height.toInt() < 138 || height.toInt() > 167)
        {
            msgBox.setText(tr("Incorrect data\n"
                           "The height of %1 from 10 years to 15 years can't be less than 138 cm or more than 167 cm\n"
                           "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_height = height;
        }
    }
    else if(m_person.m_age.toInt() > 15 && m_person.m_age.toInt() <= 17)
    {
        if(height.toInt() < 150 || height.toInt() > 177)
        {
            msgBox.setText(tr("Incorrect data\n"
                           "The height of %1 from 17 years to 17 years can't be less than 150 cm or more than 177 cm\n"
                           "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_height = height;
        }
    }
    else if(m_person.m_age.toInt() > 17 && m_person.m_age.toInt() <= 100)
    {
        if(height.toInt() < 150 || height.toInt() > 200)
        {
            msgBox.setText(tr("Incorrect data\n"
                           "The height of %1 from 17 year to 100 years can't be less than 150 cm or more than 200 cm\n"
                           "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_height = height;
        }
    }
}

void person::enter_weight()
{
    QMessageBox msgBox;  
    QString weight = 0;
    weight = ui1->lineEdit_4->text();
    
    if(m_person.m_age.toInt() == 1)
    {
        if(weight.toInt() < 4 || weight.toInt() > 10)
        {
            msgBox.setText(tr("Incorrect data\n"
                              "The weight of %1 in 1 year can't be less than 4 kg or more than 10 kg\n"
                              "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_weight = weight;
        }
    }
    else if(m_person.m_age.toInt() > 1 && m_person.m_age.toInt() <= 3)
    {
        if(weight.toInt() < 10 || weight.toInt() > 13)
        {
            msgBox.setText(tr("Incorrect data\n"
                              "The weight of %1 from 1 year to 3 years can't be less than 10 kg or more than 15 kg\n"
                              "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_weight = weight;
        }
    }
    else if(m_person.m_age.toInt() > 3 && m_person.m_age.toInt() <= 10)
    {
        if(weight.toInt() < 15 || weight.toInt() > 31)
        {
            msgBox.setText(tr("Incorrect data\n"
                              "The weight of %1 from 3 years to 10 years can't be less than 15 kg or more than 31 kg\n"
                              "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_weight = weight;
        }
    }
    else if(m_person.m_age.toInt() > 10 && m_person.m_age.toInt() <= 15)
    {
        if(weight.toInt() < 31 || weight.toInt() > 55)
        {
            msgBox.setText(tr("Incorrect data\n"
                              "The weight of %1 from 10 years to 15 years can't be less than 31 kg or more than 55 kg\n"
                              "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_weight = weight;
        }
    }
    else if(m_person.m_age.toInt() > 15 && m_person.m_age.toInt() <= 17)
    {
        if(weight.toInt() < 55 || weight.toInt() > 66)
        {
            msgBox.setText(tr("Incorrect data\n"
                              "The weight of %1 from 15 years to 17 years can't be less than 55 kg or more than 66 kg\n"
                              "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_weight = weight;
        }
    }
    else if(m_person.m_age.toInt() > 17 && m_person.m_age.toInt() <= 100)
    {
        if(weight.toInt() < 55 || weight.toInt() > 100)
        {
            msgBox.setText(tr("Incorrect data\n"
                              "The weight of %1 from 17 years to 100 years can't be less than 55 kg or more than 100 kg\n"
                              "Enter the height of %1").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_weight = weight;
        }
    }
}

void person::enter_nationality()
{
    m_person.m_choice_nationality = ui1->comboBox->currentText();
}

void person::enter_the_date_of_birthday()
{
    QMessageBox msgBox;
    QString year_of_birth = ui1->lineEdit_6->text();
    if(year_of_birth.toInt() < 0 || year_of_birth.toInt() > cur_year)
    {       
       msgBox.setText(tr("Enter the year from 0 to %1\n"
                         "Enter the year of birth: ").arg(cur_year));
       msgBox.exec();
       return;
    }
    else
    {
        m_person.m_year_of_birth = year_of_birth;
    }
    int possible_year_of_birth = cur_year - m_person.m_age.toInt();
    QString month_of_birth = ui1->lineEdit_10->text();
    if(possible_year_of_birth == m_person.m_year_of_birth.toInt())
    {

        if(month_of_birth.toInt() < 1 || month_of_birth.toInt() > cur_month)
        {
            msgBox.setText(tr("The month of birth can't be less than 1 or more than %1").arg(cur_month));
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_month_of_birth = month_of_birth;
        }
    }
    else
    {
        if(month_of_birth.toInt() < 1 || month_of_birth.toInt() > 12)
        {
            msgBox.setText("The month of birth can't be less than 1 or more than 12.");
            msgBox.exec();
            return;
        }
        else
        {
            m_person.m_month_of_birth = month_of_birth;
        }
    }
    QString day_of_birth = ui1->lineEdit_5->text();
    auto _31day = [&]()
    {
        if(day_of_birth.toInt() < 1 || day_of_birth.toInt() > 31)
        {
            msgBox.setText(tr("There are 31 days in %1th month.").arg(m_person.m_month_of_birth));
            msgBox.exec();
            return 0;
        }
        else
        {
            return day_of_birth.toInt();
        }
    };
    auto _28day = [&]()
    {
        if(day_of_birth.toInt() < 1 || day_of_birth.toInt() > 28)
        {
            msgBox.setText(tr("There are 28 days in %1th month.").arg(m_person.m_month_of_birth));
            msgBox.exec();
            return 0;        
        }
        else
        {
            return day_of_birth.toInt();
        }
    };
    auto _30day = [&]()
    {
        if(day_of_birth.toInt() < 1 || day_of_birth.toInt() > 30)
        {
            msgBox.setText(tr("There are 30 days in %1th month.").arg(m_person.m_month_of_birth));
            msgBox.exec();
            return 0;        
        }
        else
        {
            return day_of_birth.toInt();
        }
    };
    switch (m_person.m_month_of_birth.toInt())
        {
            case 1: m_person.m_day_of_birth = QString::number(_31day());
                break;
            case 2: m_person.m_day_of_birth = QString::number(_28day());
                break;
            case 3: m_person.m_day_of_birth = QString::number(_31day());
                break;
            case 4: m_person.m_day_of_birth = QString::number(_30day());
                break;
            case 5: m_person.m_day_of_birth = QString::number(_31day());
                break;
            case 6: m_person.m_day_of_birth = QString::number(_30day());
                break;
            case 7: m_person.m_day_of_birth = QString::number(_31day());
                break;
            case 8: m_person.m_day_of_birth = QString::number(_31day());
                break;
            case 9: m_person.m_day_of_birth = QString::number(_30day());
                break;
            case 10: m_person.m_day_of_birth = QString::number(_31day());
                break;
            case 11: m_person.m_day_of_birth = QString::number(_30day());
                break;
            case 12: m_person.m_day_of_birth = QString::number(_31day());
                break;
        }
}

bool person::person_is_alive()
{
    bool person_is_alive = false;
    int dif_betw_cur_and_birth_year = cur_year - m_person.m_year_of_birth.toInt();
    if(dif_betw_cur_and_birth_year <= 101)
    {
        if(dif_betw_cur_and_birth_year == 101)
        {
            if(cur_month < m_person.m_month_of_birth.toInt())
            {
                person_is_alive = true;
                return person_is_alive;
            }
            else if(cur_month == m_person.m_month_of_birth.toInt())
            {
                if(cur_day < m_person.m_day_of_birth.toInt())
                {
                    person_is_alive = true;
                    return person_is_alive;
                }
                else if(cur_day >= m_person.m_day_of_birth.toInt())
                {
                    return person_is_alive;
                }
            }
            else if(cur_month > m_person.m_month_of_birth.toInt())
            {
                return person_is_alive;
            }
        }
        else if(dif_betw_cur_and_birth_year == m_person.m_age.toInt() + 1)
        {
            person_is_alive = true;
            return person_is_alive;
        }
        else if(dif_betw_cur_and_birth_year == m_person.m_age.toInt())
        {
            person_is_alive = true;
            return person_is_alive;
        }
    }
    return person_is_alive;
}

void person::person_is_death()
{
    int possible_year_of_death = m_person.m_year_of_birth.toInt() + m_person.m_age.toInt();
    QString year_of_death  = ui1->lineEdit_7->text();
    QMessageBox msgBox;
    if(year_of_death.toInt() == possible_year_of_death || year_of_death.toInt() == possible_year_of_death + 1)
    {
        m_person.m_year_of_death = year_of_death;
    }
    else
    {
        msgBox.setText(tr("Maybe %1 died in %2?").arg(m_person.m_name, possible_year_of_death));
        msgBox.exec();
        return;
    }
    QString month_of_death = ui1->lineEdit_9->text();
    if(m_person.m_year_of_death.toInt() == cur_year)
    {
        if(m_person.m_year_of_death.toInt() == possible_year_of_death + 1)
        {
            if(month_of_death > m_person.m_month_of_birth || month_of_death.toInt() > cur_month)
            {
                msgBox.setText(tr("Enter the month from 1 to %1").arg(m_person.m_month_of_birth));
                msgBox.exec();
                return;
            }
            else
            {
                m_person.m_month_of_death = month_of_death;
            }
        }
        else if(m_person.m_year_of_death.toInt() == possible_year_of_death)
        {
            if(month_of_death.toInt() < m_person.m_month_of_birth.toInt() || month_of_death.toInt() > cur_month)
            {
                msgBox.setText(tr("Enter the month from %1 to %2").arg(m_person.m_month_of_birth, cur_month));
                msgBox.exec();
                return;
            }
            else
            {
                m_person.m_month_of_death = month_of_death;
            }
        }
    }
    else if(m_person.m_year_of_death.toInt() == possible_year_of_death)
    {
        if(month_of_death.toInt() < m_person.m_month_of_birth.toInt() || month_of_death.toInt() > 12)
        {
            msgBox.setText(tr("Enter the month from %1 to 12").arg(m_person.m_month_of_birth));
            msgBox.exec();
            return;            
        }
        else
        {
            m_person.m_month_of_death = month_of_death;
        }
    }
    else if(m_person.m_year_of_death.toInt() == possible_year_of_death + 1)
    {
        if(month_of_death.toInt() < 1 || month_of_death.toInt() > m_person.m_month_of_birth.toInt())
        {
            msgBox.setText(tr("Enter the month from 1 to %2").arg(m_person.m_month_of_birth));
            msgBox.exec();
            return;
        }
        else 
        {
            m_person.m_month_of_death = month_of_death; 
        }
    }
    
    QString day_of_death = ui1->lineEdit_8->text();
    if(m_person.m_month_of_death.toInt() == m_person.m_month_of_birth.toInt())
    {
        auto _31day = [&]()
        {
            if(m_person.m_age.toInt() == possible_year_of_death - m_person.m_year_of_birth.toInt())
            {
                if(day_of_death.toInt() < m_person.m_day_of_birth.toInt()  || day_of_death.toInt() > 31)
                {
                    msgBox.setText(tr("Maybe %1 died in the period from %2 to 31.").arg(m_person.m_name, m_person.m_day_of_birth));
                    msgBox.exec();
                    return 0;
                }
                else
                {
                    return day_of_death.toInt();
                }
            }
            else
            {
                if(day_of_death.toInt() < 1 || day_of_death.toInt() >= m_person.m_day_of_birth.toInt())
                {
                    msgBox.setText(tr("Maybe %1 died in the period from 1 to %2.").arg(m_person.m_name, m_person.m_day_of_birth.toInt() - 1));
                    msgBox.exec();
                    return 0;
                }
                else
                {
                    return day_of_death.toInt();
                }
            }
        };
        auto _30day = [&]()
        {
            if(m_person.m_age.toInt() == possible_year_of_death - m_person.m_year_of_birth.toInt())
            {
                if(day_of_death.toInt() < m_person.m_day_of_birth.toInt()  || day_of_death.toInt() > 30)
                {
                    msgBox.setText(tr("Maybe %1 died in the period from %2 to 30.").arg(m_person.m_name, m_person.m_day_of_birth));
                    msgBox.exec();
                    return 0;
                }
                else
                {
                    return day_of_death.toInt();
                }
            }
            else
            {
                if(day_of_death.toInt() < 1 || day_of_death.toInt() >= m_person.m_day_of_birth.toInt())
                {
                    msgBox.setText(tr("Maybe %1 died in the period from 1 to %2.").arg(m_person.m_name, m_person.m_day_of_birth.toInt() - 1));
                    msgBox.exec();
                    return 0;
                }
                else
                {
                    return day_of_death.toInt();
                }
            }
        };
        auto _28day = [&]()
        {
            if(m_person.m_age.toInt() == possible_year_of_death - m_person.m_year_of_birth.toInt())
            {
                if(day_of_death.toInt() < m_person.m_day_of_birth.toInt()  || day_of_death.toInt() > 28)
                {
                    msgBox.setText(tr("Maybe %1 died in the period from %2 to 28.").arg(m_person.m_name, m_person.m_day_of_birth));
                    msgBox.exec();
                    return 0;
                }
                else
                {
                    return day_of_death.toInt();
                }
            }
            else
            {
                if(day_of_death.toInt() < 1 || day_of_death.toInt() >= m_person.m_day_of_birth.toInt())
                {
                    msgBox.setText(tr("Maybe %1 died in the period from 1 to %2.").arg(m_person.m_name, m_person.m_day_of_birth.toInt() - 1));
                    msgBox.exec();
                    return 0;
                }
                else
                {
                    return day_of_death.toInt();
                }
            }
        };
        switch (m_person.m_month_of_birth.toInt()) 
        {
        case 1: m_person.m_day_of_death = QString::number(_31day());
            break;
        case 2: m_person.m_day_of_death = QString::number(_28day());
            break;
        case 3: m_person.m_day_of_death = QString::number(_31day());
            break;
        case 4: m_person.m_day_of_death = QString::number(_30day());
            break;
        case 5: m_person.m_day_of_death = QString::number(_31day());
            break;
        case 6: m_person.m_day_of_death = QString::number(_30day());
            break;
        case 7: m_person.m_day_of_death = QString::number(_31day());
            break;
        case 8: m_person.m_day_of_death = QString::number(_31day());
            break;
        case 9: m_person.m_day_of_death = QString::number(_30day());
            break;
        case 10: m_person.m_day_of_death = QString::number(_31day());
            break;
        case 11: m_person.m_day_of_death = QString::number(_30day());
            break;
        case 12: m_person.m_day_of_death = QString::number(_31day());
            break;
        }
    }
    else
    {
        auto _31day = [&]()
        {
            if(day_of_death.toInt() < 1 || day_of_death.toInt() > 31)
            {
                msgBox.setText(tr("There are 31 days in %1th month.").arg(m_person.m_month_of_death.toInt()));
                msgBox.exec();
                return 0;
            }
            else
            {
                return day_of_death.toInt();
            }
        };
        auto _30day = [&]()
        {
            if(day_of_death.toInt() < 1 || day_of_death.toInt() > 30)
            {
                msgBox.setText(tr("There are 30 days in %1th month.").arg(m_person.m_month_of_death.toInt()));
                msgBox.exec();
                return 0;
            }
            else
            {
                return day_of_death.toInt();
            }
        };
        auto _28day = [&]()
        {
            if(day_of_death.toInt() < 1 || day_of_death.toInt() > 28)
            {
                msgBox.setText(tr("There are 28 days in %1th month.").arg(m_person.m_month_of_death.toInt()));
                msgBox.exec();
                return 0;
            }
            else
            {
                return day_of_death.toInt();
            }
        };
        switch (m_person.m_month_of_death.toInt())
        {
            case 1: m_person.m_day_of_death = QString::number(_31day());
                break;
            case 2: m_person.m_day_of_death = QString::number(_28day());
                break;
            case 3: m_person.m_day_of_death = QString::number(_31day());
                break;
            case 4: m_person.m_day_of_death = QString::number(_30day());
                break;
            case 5: m_person.m_day_of_death = QString::number(_31day());
                break;
            case 6: m_person.m_day_of_death = QString::number(_30day());
                break;
            case 7: m_person.m_day_of_death = QString::number(_31day());
                break;
            case 8: m_person.m_day_of_death = QString::number(_31day());
                break;
            case 9: m_person.m_day_of_death = QString::number(_30day());
                break;
            case 10: m_person.m_day_of_death = QString::number(_31day());
                break;
            case 11: m_person.m_day_of_death = QString::number(_30day());
                break;
            case 12: m_person.m_day_of_death = QString::number(_31day());
                break;
        }
    }
}

void person::enter_the_date_of_death()
{
    QMessageBox msgBox;
    bool person_is_alive = this->person_is_alive();
    QString year_of_death  = ui1->lineEdit_7->text();
    QString month_of_death = ui1->lineEdit_9->text();
    QString day_of_death   = ui1->lineEdit_8->text();
    
    if(person_is_alive)
    {
        if(!year_of_death.isEmpty() && !month_of_death.isEmpty() && !day_of_death.isEmpty())
        {
            person_is_death();    
        }
        
    }
    else
    {
        
        if(year_of_death.isEmpty())
        {
            msgBox.setText(tr("%1 can't be alive (or live more than 100 years)").arg(m_person.m_name));
            msgBox.exec();
            return;
        }
        else
        {
            if(month_of_death.isEmpty())
            {
                msgBox.setText(tr("%1 can't be alive (or live more than 100 years)").arg(m_person.m_name));
                msgBox.exec();
                return;
            }
            else
            {
                if(day_of_death.isEmpty())
                {
                    msgBox.setText(tr("%1 can't be alive (or live more than 100 years)").arg(m_person.m_name));
                    msgBox.exec();
                    return;
                }
                else
                {
                    person_is_death();
                }
            }
        }
        
        
    }
}

void person::create_content_of_file()
{

    QString temp;
    temp = m_person.m_name;
    temp.insert(0, '[');
    temp.push_back("]");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    temp = m_person.m_gender;
    temp.insert(0, "gender=");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    temp = m_person.m_age;
    temp.insert(0, "age=");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    temp = m_person.m_height;
    temp.insert(0, "height=");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    temp = m_person.m_weight;
    temp.insert(0, "weight=");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    temp = m_person.m_choice_nationality;
    temp.insert(0, "nationality=");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    temp = m_person.m_age;
    temp.insert(0, "age=");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    temp = m_person.m_day_of_birth;
    temp.push_back('.');
    temp = temp + m_person.m_month_of_birth;
    temp.push_back('.');
    temp = temp + m_person.m_year_of_birth;
    temp.insert(0, "date_of_birthday=");
    temp.push_back("\r\n");
    m_temp_container.push_back(temp);
    temp.clear();

    if(m_person.m_year_of_death == "empty string")
    {
        temp.push_back("date_of_death=0.0.0\r\n");
        m_temp_container.push_back(temp);
        temp.clear();
    }
    else
    {
        temp = m_person.m_day_of_death;
        temp.push_back('.');
        temp = temp + m_person.m_month_of_death;
        temp.push_back('.');
        temp = temp + m_person.m_year_of_death;
        temp.insert(0, "date_of_death=");
        temp.push_back("\r\n");
        m_temp_container.push_back(temp);
        temp.clear();
    }
}

void person::write_data()
{
    QFile file(m_person_storage1);
    file.open(QIODevice::Append);
    //ofstream fout(m_person_storage1 , ios_base::out | ios_base::app);
    QTextStream out(&file);
    QChar ch;
    for (int i = 0; i < m_temp_container.size(); i++)
    {
        for(int j = 0; j < m_temp_container.at(i).size(); j++)
        {
            if(m_temp_container.at(i).at(j) == '\0')
            {
                continue;
            }
            else
            {
                ch = m_temp_container.at(i).at(j);
                out << ch;
            }
        }
    }
    m_temp_container.clear();
}

void person::add_data()
{
    enter_name();
    enter_gender();
    enter_age();
    enter_height();
    enter_weight();
    enter_nationality();
    enter_the_date_of_birthday();
    enter_the_date_of_death();
    create_content_of_file();
    write_data();
}

person::~person()
{
    delete ui1;
}
