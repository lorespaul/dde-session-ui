#ifndef SessionManagerTool_H
#define SessionManagerTool_H
#include <QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>

#include "view/mainframe.h"
#include "controller/dbusmanagement.h"
#include "backgroundlabel.h"
#include "util_signalmanager.h"

class BackgroundLabel;
class SessionManagement : public QFrame
{
    Q_OBJECT
public:
    SessionManagement(QWidget* parent = 0);
    ~SessionManagement();
signals:
    void DirectKeyLeft();
    void DirectKeyRight();
    void pressEnter();
public slots:
    void keyPressEvent(QKeyEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
    void powerAction(QString action);

private:
    void initUI();
    void initConnect();
    void initData();

    int m_mode=2;
    QHBoxLayout* m_Layout;
    MainFrame* m_content;
    SessionManageInterfaceManagement* m_sessionInterface;
    BackgroundLabel* m_backgroundLabel;
};

#endif // SessionManagerTool_H
