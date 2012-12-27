#include "position.h"

Position::Position(QString name, QString description)
{
    this->m_Name = name;
    this->m_Description = description;
}

QString Position::toString()
{
    QString str = QString("Name: %1 Description: %2\n")
            .arg(this->m_Name)
            .arg(this->m_Description);

    return str;
}
