#include "mytime.h"

MyTime::MyTime(QObject *parent) : QObject(parent)
{

    QTimer *timer = new QTimer () ;

    connect(timer,SIGNAL(timeout()) , this , SLOT(update())) ;

    timer -> start(1000) ;

}

int MyTime::hour() const
{
    return m_hour ;

}

int MyTime::minute() const
{
    return m_minute ;
}

int MyTime::second() const
{
    return m_second;
}

void MyTime::setHour(const int hour)
{
    if(m_hour != hour)
        m_hour = hour;
}

void MyTime::setMinute(const int minute)
{

    if(m_minute != minute)
        m_minute = minute;
}

void MyTime::setSecond(const int second)
{

    if(m_second != second)
        m_second = second;
}
void MyTime::update()
{
    m_hour = QTime::currentTime().hour();
    m_minute = QTime::currentTime().minute();
    m_second = QTime::currentTime().second();
}
