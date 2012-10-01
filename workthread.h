#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QThread>
class MW;

class WorkThread : public QThread
{
    Q_OBJECT
public:
    explicit WorkThread(MW *parent = 0);

    void run();
    QString job;

    void cout(const QString &s, bool statusbar = false);
    void iout(const QString &file, int line, const QString &message);

private:
    MW *par;

signals:
    void textOut(QString, bool);
    void issueOut(QString, int, QString);

public slots:

};

#endif // WORKTHREAD_H
