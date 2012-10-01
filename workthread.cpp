#include "workthread.h"
#include "mw.h"

WorkThread::WorkThread(MW *parent) :
    QThread(parent)
{
    par = parent;
}

void WorkThread::cout(const QString &s, bool statusbar)
{
    emit textOut(s, statusbar);
}

void WorkThread::run()
{
    par->doJob(job);
}

void WorkThread::iout(const QString &file, int line, const QString &message)
{
    emit issueOut(file, line, message);
}
