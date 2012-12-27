#include "employer.h"
#include "person.h"
#include "position.h"

Person::Person(QString name)
{
    this->m_Name = name;
}

void Person::setPosition(Employer employer, Position position)
{
    this->m_Employer = employer;
    this->m_Position = position;
}

QString Person::toString()
{
    QString str = QString("Name: %1").arg(this->m_Name);

    return str;
}
