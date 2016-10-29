#ifndef CONNECTEDWINDOW_H
#define CONNECTEDWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QMessageBox>
#include <QStringListModel>
#include "../common.hpp"
#include <QDir>
#include <QDebug>
#include <QRegExp>

namespace Ui {
class ConnectedWindow;
}

class ConnectedWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit ConnectedWindow(server_info serv, QWidget *parent = 0);
    ~ConnectedWindow();

private slots:
    void fetch_music();
    void list_music();
    void kill_client();

    void on_lineEdit_textChanged(const QString &arg1);

private:
    Ui::ConnectedWindow *ui;
    server_info s_info;
    QStringList myList;

};

#endif // CONNECTEDWINDOW_H
