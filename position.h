#ifndef POSITION_H
#define POSITION_H

#include <QString>

class Position
{
private:
    QString m_Name;
    QString m_Description;
public:
    Position(QString name, QString description);
    QString toString();
};

#endif // POSITION_H
