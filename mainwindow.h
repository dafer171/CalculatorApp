#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void handleButtonClicked();
    void clearLineEdit();
    void evaluateExpression();
    void saveToFile(const QString& data);
    QString loadFromFile();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
