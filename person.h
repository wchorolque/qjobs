#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Employer;
class Position;

class Person
{
private:
    QString m_Name;
    QBool m_Employed;
    Position m_Position;
    Employer m_Employer;

public:
    Person(QString name);
    void setPosition(Employer employer, Position position);
    QString toString();
};

#endif // PERSON_H
