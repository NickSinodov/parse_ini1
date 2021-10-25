 #include "file.h"
#include "ui_file.h"
file::file(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::file)
{
    ui->setupUi(this);

    connect(ui->pushButton, &QPushButton::clicked, this, &file::read_file);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &file::add);

}

void file::read_file()
{
     ifstream file(m_person_storage);
     if(!file.is_open())
     {
         ofstream new_empty_file(m_person_storage);
     }

    char ch;
    ifstream fin(m_person_storage);
    if(fin.peek() == EOF)
    {
        ui->textBrowser->insertPlainText(tr("Файл пуст\n"));
    }
    else
    {
        while (!fin.eof())
        {
            ch = fin.get();
            ui->textBrowser->insertPlainText(tr("%1").arg(ch));
        }
    }
    fin.close();
}

void file::add()
{
    m_widget_person.show();
}



file::~file()
{
    delete ui;
}
