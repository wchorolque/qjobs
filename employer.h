#ifndef EMPLOYER_H
#define EMPLOYER_H

#include <QString>

class Person;
class Position;

class Employer
{
private:
    QString m_Name;
    QString m_Market;
public:
    Employer(QString name, QString market);
    void hire(Person& person, Position& position);
    QString toString() const;
};

#endif // EMPLOYER_H
