/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "serialportcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_10;
    QTabWidget *connectionTab;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QTabWidget *interfaceTab;
    QWidget *tabCan;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_12;
    QComboBox *canPlugin;
    QComboBox *canPort;
    QLabel *label_17;
    QComboBox *canBitRate;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *canConnect;
    QPushButton *canDisconnect;
    QWidget *tabScpiSerial;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_12;
    SerialPortComboBox *scpiSerialPort;
    QSpacerItem *horizontalSpacer;
    QPushButton *scpiSerialConnect;
    QPushButton *scpiSerialDisconnect;
    QWidget *tabShqSerial;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_15;
    SerialPortComboBox *shqSerialPort;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *shqSerialConnect;
    QPushButton *shqSerialDisconnect;
    QWidget *tabScpiGpib;
    QWidget *tabScpiEthernet;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLineEdit *scpiEthernetHost;
    QLabel *label_10;
    QLineEdit *scpiEthernetPort;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *scpiEthernetConnect;
    QPushButton *scpiEthernetDisconnect;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QComboBox *host;
    QLabel *label_5;
    QComboBox *port;
    QLabel *label_6;
    QComboBox *canInterface;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *user;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *password;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QSpinBox *timeout;
    QVBoxLayout *verticalLayout_3;
    QPushButton *login;
    QPushButton *logout;
    QGroupBox *groupCommand;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *command;
    QPushButton *buttonSend;
    QPushButton *buttonClearLog;
    QPushButton *commandHelp;
    QCheckBox *checkTimeStamp;
    QGroupBox *groupScript;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *scriptFilename;
    QPushButton *selectScript;
    QPushButton *runScript;
    QPushButton *scriptHelp;
    QLabel *header;
    QTextEdit *log;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(821, 632);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_10 = new QVBoxLayout(centralWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        connectionTab = new QTabWidget(centralWidget);
        connectionTab->setObjectName(QStringLiteral("connectionTab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_8->addWidget(label_8);

        interfaceTab = new QTabWidget(tab);
        interfaceTab->setObjectName(QStringLiteral("interfaceTab"));
        tabCan = new QWidget();
        tabCan->setObjectName(QStringLiteral("tabCan"));
        verticalLayout_13 = new QVBoxLayout(tabCan);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_16 = new QLabel(tabCan);
        label_16->setObjectName(QStringLiteral("label_16"));

        verticalLayout_13->addWidget(label_16);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        canPlugin = new QComboBox(tabCan);
        canPlugin->setObjectName(QStringLiteral("canPlugin"));
        canPlugin->setEnabled(false);

        verticalLayout_12->addWidget(canPlugin);

        canPort = new QComboBox(tabCan);
        canPort->setObjectName(QStringLiteral("canPort"));

        verticalLayout_12->addWidget(canPort);


        horizontalLayout_8->addLayout(verticalLayout_12);

        label_17 = new QLabel(tabCan);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_8->addWidget(label_17);

        canBitRate = new QComboBox(tabCan);
        canBitRate->setObjectName(QStringLiteral("canBitRate"));
        canBitRate->setEnabled(false);

        horizontalLayout_8->addWidget(canBitRate);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        canConnect = new QPushButton(tabCan);
        canConnect->setObjectName(QStringLiteral("canConnect"));

        horizontalLayout_8->addWidget(canConnect);

        canDisconnect = new QPushButton(tabCan);
        canDisconnect->setObjectName(QStringLiteral("canDisconnect"));

        horizontalLayout_8->addWidget(canDisconnect);


        verticalLayout_13->addLayout(horizontalLayout_8);

        interfaceTab->addTab(tabCan, QString());
        tabScpiSerial = new QWidget();
        tabScpiSerial->setObjectName(QStringLiteral("tabScpiSerial"));
        verticalLayout_7 = new QVBoxLayout(tabScpiSerial);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_13 = new QLabel(tabScpiSerial);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout_7->addWidget(label_13);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_12 = new QLabel(tabScpiSerial);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_5->addWidget(label_12);

        scpiSerialPort = new SerialPortComboBox(tabScpiSerial);
        scpiSerialPort->setObjectName(QStringLiteral("scpiSerialPort"));

        horizontalLayout_5->addWidget(scpiSerialPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        scpiSerialConnect = new QPushButton(tabScpiSerial);
        scpiSerialConnect->setObjectName(QStringLiteral("scpiSerialConnect"));

        horizontalLayout_5->addWidget(scpiSerialConnect);

        scpiSerialDisconnect = new QPushButton(tabScpiSerial);
        scpiSerialDisconnect->setObjectName(QStringLiteral("scpiSerialDisconnect"));

        horizontalLayout_5->addWidget(scpiSerialDisconnect);


        verticalLayout_7->addLayout(horizontalLayout_5);

        interfaceTab->addTab(tabScpiSerial, QString());
        tabShqSerial = new QWidget();
        tabShqSerial->setObjectName(QStringLiteral("tabShqSerial"));
        verticalLayout_11 = new QVBoxLayout(tabShqSerial);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_14 = new QLabel(tabShqSerial);
        label_14->setObjectName(QStringLiteral("label_14"));

        verticalLayout_11->addWidget(label_14);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_15 = new QLabel(tabShqSerial);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_7->addWidget(label_15);

        shqSerialPort = new SerialPortComboBox(tabShqSerial);
        shqSerialPort->setObjectName(QStringLiteral("shqSerialPort"));

        horizontalLayout_7->addWidget(shqSerialPort);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        shqSerialConnect = new QPushButton(tabShqSerial);
        shqSerialConnect->setObjectName(QStringLiteral("shqSerialConnect"));

        horizontalLayout_7->addWidget(shqSerialConnect);

        shqSerialDisconnect = new QPushButton(tabShqSerial);
        shqSerialDisconnect->setObjectName(QStringLiteral("shqSerialDisconnect"));

        horizontalLayout_7->addWidget(shqSerialDisconnect);


        verticalLayout_11->addLayout(horizontalLayout_7);

        interfaceTab->addTab(tabShqSerial, QString());
        tabScpiGpib = new QWidget();
        tabScpiGpib->setObjectName(QStringLiteral("tabScpiGpib"));
        interfaceTab->addTab(tabScpiGpib, QString());
        tabScpiEthernet = new QWidget();
        tabScpiEthernet->setObjectName(QStringLiteral("tabScpiEthernet"));
        verticalLayout_6 = new QVBoxLayout(tabScpiEthernet);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_11 = new QLabel(tabScpiEthernet);
        label_11->setObjectName(QStringLiteral("label_11"));

        verticalLayout_6->addWidget(label_11);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_9 = new QLabel(tabScpiEthernet);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);

        scpiEthernetHost = new QLineEdit(tabScpiEthernet);
        scpiEthernetHost->setObjectName(QStringLiteral("scpiEthernetHost"));

        horizontalLayout_6->addWidget(scpiEthernetHost);

        label_10 = new QLabel(tabScpiEthernet);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_6->addWidget(label_10);

        scpiEthernetPort = new QLineEdit(tabScpiEthernet);
        scpiEthernetPort->setObjectName(QStringLiteral("scpiEthernetPort"));

        horizontalLayout_6->addWidget(scpiEthernetPort);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        scpiEthernetConnect = new QPushButton(tabScpiEthernet);
        scpiEthernetConnect->setObjectName(QStringLiteral("scpiEthernetConnect"));

        horizontalLayout_6->addWidget(scpiEthernetConnect);

        scpiEthernetDisconnect = new QPushButton(tabScpiEthernet);
        scpiEthernetDisconnect->setObjectName(QStringLiteral("scpiEthernetDisconnect"));

        horizontalLayout_6->addWidget(scpiEthernetDisconnect);


        verticalLayout_6->addLayout(horizontalLayout_6);

        interfaceTab->addTab(tabScpiEthernet, QString());

        verticalLayout_8->addWidget(interfaceTab);

        connectionTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_9 = new QVBoxLayout(tab_2);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_9->addWidget(label_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        host = new QComboBox(tab_2);
        host->setObjectName(QStringLiteral("host"));
        host->setEditable(true);

        horizontalLayout->addWidget(host);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        port = new QComboBox(tab_2);
        port->setObjectName(QStringLiteral("port"));
        port->setEditable(true);

        horizontalLayout->addWidget(port);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        canInterface = new QComboBox(tab_2);
        canInterface->setObjectName(QStringLiteral("canInterface"));

        horizontalLayout->addWidget(canInterface);


        verticalLayout_9->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        user = new QLineEdit(tab_2);
        user->setObjectName(QStringLiteral("user"));

        verticalLayout->addWidget(user);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        password = new QLineEdit(tab_2);
        password->setObjectName(QStringLiteral("password"));

        verticalLayout_2->addWidget(password);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_4->addWidget(label_3);

        timeout = new QSpinBox(tab_2);
        timeout->setObjectName(QStringLiteral("timeout"));
        timeout->setMinimum(100);
        timeout->setMaximum(99999);
        timeout->setValue(5000);

        verticalLayout_4->addWidget(timeout);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        login = new QPushButton(tab_2);
        login->setObjectName(QStringLiteral("login"));

        verticalLayout_3->addWidget(login);

        logout = new QPushButton(tab_2);
        logout->setObjectName(QStringLiteral("logout"));

        verticalLayout_3->addWidget(logout);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_9->addLayout(horizontalLayout_2);

        connectionTab->addTab(tab_2, QString());

        verticalLayout_10->addWidget(connectionTab);

        groupCommand = new QGroupBox(centralWidget);
        groupCommand->setObjectName(QStringLiteral("groupCommand"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupCommand->sizePolicy().hasHeightForWidth());
        groupCommand->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(groupCommand);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        command = new QComboBox(groupCommand);
        command->setObjectName(QStringLiteral("command"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(command->sizePolicy().hasHeightForWidth());
        command->setSizePolicy(sizePolicy1);
        command->setEditable(true);

        horizontalLayout_3->addWidget(command);

        buttonSend = new QPushButton(groupCommand);
        buttonSend->setObjectName(QStringLiteral("buttonSend"));

        horizontalLayout_3->addWidget(buttonSend);

        buttonClearLog = new QPushButton(groupCommand);
        buttonClearLog->setObjectName(QStringLiteral("buttonClearLog"));

        horizontalLayout_3->addWidget(buttonClearLog);

        commandHelp = new QPushButton(groupCommand);
        commandHelp->setObjectName(QStringLiteral("commandHelp"));

        horizontalLayout_3->addWidget(commandHelp);


        verticalLayout_5->addLayout(horizontalLayout_3);

        checkTimeStamp = new QCheckBox(groupCommand);
        checkTimeStamp->setObjectName(QStringLiteral("checkTimeStamp"));
        checkTimeStamp->setChecked(true);

        verticalLayout_5->addWidget(checkTimeStamp);


        verticalLayout_10->addWidget(groupCommand);

        groupScript = new QGroupBox(centralWidget);
        groupScript->setObjectName(QStringLiteral("groupScript"));
        horizontalLayout_4 = new QHBoxLayout(groupScript);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        scriptFilename = new QLineEdit(groupScript);
        scriptFilename->setObjectName(QStringLiteral("scriptFilename"));

        horizontalLayout_4->addWidget(scriptFilename);

        selectScript = new QPushButton(groupScript);
        selectScript->setObjectName(QStringLiteral("selectScript"));

        horizontalLayout_4->addWidget(selectScript);

        runScript = new QPushButton(groupScript);
        runScript->setObjectName(QStringLiteral("runScript"));

        horizontalLayout_4->addWidget(runScript);

        scriptHelp = new QPushButton(groupScript);
        scriptHelp->setObjectName(QStringLiteral("scriptHelp"));

        horizontalLayout_4->addWidget(scriptHelp);


        verticalLayout_10->addWidget(groupScript);

        header = new QLabel(centralWidget);
        header->setObjectName(QStringLiteral("header"));
        QFont font;
        font.setFamily(QStringLiteral("Liberation Mono"));
        font.setPointSize(8);
        header->setFont(font);
        header->setFrameShape(QFrame::Panel);

        verticalLayout_10->addWidget(header);

        log = new QTextEdit(centralWidget);
        log->setObjectName(QStringLiteral("log"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(log->sizePolicy().hasHeightForWidth());
        log->setSizePolicy(sizePolicy2);
        log->setFont(font);
        log->setFrameShape(QFrame::Panel);
        log->setReadOnly(true);

        verticalLayout_10->addWidget(log);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_17->setBuddy(canBitRate);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);
        QObject::connect(buttonClearLog, SIGNAL(clicked()), log, SLOT(clear()));

        connectionTab->setCurrentIndex(0);
        interfaceTab->setCurrentIndex(0);
        canBitRate->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Starts a local isegHAL and connects to devices by USB, RS-232, GPIB or Ethernet.", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "Connect to local CAN bus.", Q_NULLPTR));
        canPlugin->clear();
        canPlugin->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "socketcan", Q_NULLPTR)
        );
        canPlugin->setCurrentText(QApplication::translate("MainWindow", "socketcan", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "Bitrate:", Q_NULLPTR));
        canBitRate->clear();
        canBitRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "125000", Q_NULLPTR)
         << QApplication::translate("MainWindow", "250000", Q_NULLPTR)
        );
        canConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        canDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        interfaceTab->setTabText(interfaceTab->indexOf(tabCan), QApplication::translate("MainWindow", "CAN", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Connect to devices with serial or USB connection, e.g. NHS, MICC, HPS.", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Serial port:", Q_NULLPTR));
        scpiSerialConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        scpiSerialDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        interfaceTab->setTabText(interfaceTab->indexOf(tabScpiSerial), QApplication::translate("MainWindow", "RS-232/USB (SCPI)", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Connect to NHQ or SHQ devices with serial or USB connection.", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Serial port:", Q_NULLPTR));
        shqSerialConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        shqSerialDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        interfaceTab->setTabText(interfaceTab->indexOf(tabShqSerial), QApplication::translate("MainWindow", "RS-232 (NHQ/SHQ)", Q_NULLPTR));
        interfaceTab->setTabText(interfaceTab->indexOf(tabScpiGpib), QApplication::translate("MainWindow", "GPIB (SCPI)", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Connect to a device with Ethernet by SCPI protocol, e.g. MICC, HPS.", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Host:", Q_NULLPTR));
        scpiEthernetHost->setText(QApplication::translate("MainWindow", "192.168.16.13", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Port:", Q_NULLPTR));
        scpiEthernetPort->setText(QApplication::translate("MainWindow", "10001", Q_NULLPTR));
        scpiEthernetConnect->setText(QApplication::translate("MainWindow", "Connect", Q_NULLPTR));
        scpiEthernetDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", Q_NULLPTR));
        interfaceTab->setTabText(interfaceTab->indexOf(tabScpiEthernet), QApplication::translate("MainWindow", "Ethernet (SCPI)", Q_NULLPTR));
        connectionTab->setTabText(connectionTab->indexOf(tab), QApplication::translate("MainWindow", "Local isegHAL", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Connect to an isegHAL service running on a CC24 controller or an iCSmini.", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Host:", Q_NULLPTR));
        host->clear();
        host->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "192.168.16.56", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("MainWindow", "Port:", Q_NULLPTR));
        port->clear();
        port->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1454", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("MainWindow", "Interface:", Q_NULLPTR));
        canInterface->clear();
        canInterface->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "can0", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainWindow", "User:", Q_NULLPTR));
        user->setText(QApplication::translate("MainWindow", "user", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        password->setText(QApplication::translate("MainWindow", "pass", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Timeout (ms):", Q_NULLPTR));
        login->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        logout->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        connectionTab->setTabText(connectionTab->indexOf(tab_2), QApplication::translate("MainWindow", "isegHAL Service", Q_NULLPTR));
        groupCommand->setTitle(QApplication::translate("MainWindow", "Command", Q_NULLPTR));
        command->clear();
        command->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0.1000.FirmwareName?", Q_NULLPTR)
        );
        buttonSend->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        buttonClearLog->setText(QApplication::translate("MainWindow", "Clear Log", Q_NULLPTR));
        commandHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        checkTimeStamp->setText(QApplication::translate("MainWindow", "Add timestamps to log output", Q_NULLPTR));
        groupScript->setTitle(QApplication::translate("MainWindow", "Script", Q_NULLPTR));
        selectScript->setText(QApplication::translate("MainWindow", "File...", Q_NULLPTR));
        runScript->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        scriptHelp->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        header->setText(QApplication::translate("MainWindow", "Time     |                    Object |                Value |          Quality |    Last Changed |  Last Refreshed", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
