#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <employes.h>
QT_CHARTS_USE_NAMESPACE
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_3_clicked();

    void on_refreshTableV_clicked();

    void on_deletePushButton_clicked();

    void on_updatePushButton_clicked();

    void on_triCinPushButton_clicked();

    void on_triNomPushButton_clicked();

    void on_loginPushButton_clicked();

    void on_employesPushButton_clicked();

    void on_clientPushButton_clicked();

    void on_equipementsPushButton_clicked();

    void on_evenementsPushButton_clicked();

    void on_abonnementPushButton_clicked();

    void on_showHidepushButton_clicked();

    void on_pushButton_clicked();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_PDFpushButton_clicked();



    void on_statGenderPushButton_clicked();



    void on_statSalaryPushButton_clicked();

    void on_statFonctionPushButton_clicked();

    void on_AjouterButton_clicked();

    void on_ShowAllClients_clicked();

    void on_DeleteClientBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
