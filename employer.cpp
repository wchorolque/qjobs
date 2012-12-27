#include "employer.h"

Employer::Employer(QString name, QString market)
{
    this->m_Name = name;
    this->m_Market = market;
}

void Employer::hire(Person &person, Position &position)
{

}

QString Employer::toString() const
{
    QString str = QString("Name: %1 Market: %2")
            .arg(this->m_Name)
            .arg(this->m_Market);

    return str;
}
