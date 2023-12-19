#ifndef MYTIME_H
#define MYTIME_H

#include <QObject>
#include <QQmlContext>
#include <QTime>
#include <QTimer>
class MyTime : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int hour READ hour WRITE setHour NOTIFY hourChanged)
    Q_PROPERTY(int minute READ minute WRITE setMinute NOTIFY minuteChanged)
    Q_PROPERTY(int second READ second WRITE setSecond NOTIFY secondChanged)

public:
    explicit MyTime(QObject *parent = nullptr);


    int hour () const ;
    int minute () const ;
    int second () const ;

    void setHour(const int hour );
    void setMinute(const int minute ) ;
    void setSecond(const int second)  ;

signals:

    void hourChanged() ;
    void minuteChanged();
    void secondChanged() ;

public slots :

    void update();


private:

    int m_hour  ;
    int m_minute ;
    int m_second ;


};



#endif // MYTIME_H
