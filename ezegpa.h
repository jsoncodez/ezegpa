#ifndef EZEGPA_H
#define EZEGPA_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QFileInfo>
#include <QDebug>
#include <QModelIndex>
#include <QAbstractItemModel>
#include <QSqlTableModel>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui {
class ezegpa;
}
QT_END_NAMESPACE

class ezegpa : public QMainWindow
{
    Q_OBJECT

public:
    ezegpa(QWidget *parent = nullptr);
    ~ezegpa();
    void connClose();
    bool connOpen();
    
    void calcGPA();
    void addValues2(QString, int, QString);
    
private slots:
    void on_pushButton_add_clicked();
    
    void on_pushButton_exit_clicked();
    
    void on_pushButton_load_clicked();
    
    
    void on_pushButton_delete_clicked();
    
    void on_tableView_classList_activated(const QModelIndex &index);
    // bool removeRows(int, int, const QModelIndex &parent);

private:
    Ui::ezegpa *ui;
    QSqlDatabase m_mydb;
    QString m_dbpath;
    int m_qpiSum = 0;
    int m_creditsSum = 0;
    float m_GPA = 0;
    QModelIndex m_currentSelection;
    
};
#endif // EZEGPA_H
