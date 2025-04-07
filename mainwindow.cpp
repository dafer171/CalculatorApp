#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QJSEngine>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::vector<QPushButton*> buttons = {
        ui->pushButton_00, ui->pushButton_01, ui->pushButton_02, ui->pushButton_03,
        ui->pushButton_04, ui->pushButton_05, ui->pushButton_06, ui->pushButton_07,
        ui->pushButton_08, ui->pushButton_09,  // buttons 0-9
        ui->pushButton_plus, // +
        ui->pushButton_minus, // -
        ui->pushButton_multiply, // *
        ui->pushButton_divide, // /
        ui->pushButton_coma  // ,
    };

    for (QPushButton* btn : buttons) {
        connect(btn, &QPushButton::clicked, this, &MainWindow::handleButtonClicked);
    }

    // Clearing input when clicking "C"
    connect(ui->pushButton_clear, &QPushButton::clicked, this, &MainWindow::clearLineEdit);

    // Make the calculations when clicking "="
    connect(ui->pushButton_equal, &QPushButton::clicked, this, &MainWindow::evaluateExpression);

    // Save the expression to a file
    connect(ui->pushButton_save, &QPushButton::clicked, [this]() {
        QString expr = ui->lineEdit->text();
        saveToFile("Expression: " + expr);
    });

    // Load the history
    connect(ui->pushButton_load, &QPushButton::clicked, [this]() {
        QString history = loadFromFile();
        ui->lineEdit->setText(history);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Appends the text of the clicked button to the current input in the line edit
void MainWindow::handleButtonClicked()
{
    QPushButton* button = qobject_cast<QPushButton*>(sender());
    if (!button) return;

    QString buttonText = button->text();
    QString currentText = ui->lineEdit->text();
    ui->lineEdit->setText(currentText + buttonText);
}

// Clears all text from the line edit
void MainWindow::clearLineEdit()
{
    ui->lineEdit->clear();
}

// Evaluates the mathematical expression entered in the line edit and displays the result or an error message
void MainWindow::evaluateExpression()
{
    QString expr = ui->lineEdit->text();
    expr.replace(",", "."); // use both comma and dot as a decimal separator

    QJSEngine engine;
    QJSValue result = engine.evaluate(expr);

    if (result.isError()) {
        ui->lineEdit->setText("Error");
    } else {
        ui->lineEdit->setText(result.toString());
    }
}

// Saves a given string to a file named "calculation_history.txt"
void MainWindow::saveToFile(const QString& data)
{
    QFile file("calculation_history.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << data << "\n";
        file.close();
    } else {
        QMessageBox::warning(this, "Error", "It's not possible to save the file.");
    }
}

// Loads the content of "calculation_history.txt"
QString MainWindow::loadFromFile()
{
    QFile file("calculation_history.txt");
    QString result = "";
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        result = in.readAll();  // Reads the file
        file.close();
    } else {
        QMessageBox::warning(this, "Error", "No se pudo leer el archivo.");
    }
    return result;
}

