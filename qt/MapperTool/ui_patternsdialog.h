/********************************************************************************
** Form generated from reading UI file 'patternsdialog.ui'
**
** Created: Fri Feb 8 19:23:44 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATTERNSDIALOG_H
#define UI_PATTERNSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PatternsDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *selectPatternsButton;
    QLabel *label;
    QFormLayout *formLayout;
    QSpinBox *depthList;
    QLabel *label_2;
    QComboBox *channelList;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QPushButton *extractLightButton;
    QPushButton *extractDarkButton;
    QSpacerItem *verticalSpacer;
    QPushButton *acceptButton;
    QPushButton *rejectButton;

    void setupUi(QDialog *PatternsDialog)
    {
        if (PatternsDialog->objectName().isEmpty())
            PatternsDialog->setObjectName(QString::fromUtf8("PatternsDialog"));
        PatternsDialog->resize(329, 300);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PatternsDialog->sizePolicy().hasHeightForWidth());
        PatternsDialog->setSizePolicy(sizePolicy);
        PatternsDialog->setSizeGripEnabled(true);
        PatternsDialog->setModal(true);
        horizontalLayout = new QHBoxLayout(PatternsDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(PatternsDialog);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEnabled(false);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setAlternatingRowColors(true);
        listWidget->setTextElideMode(Qt::ElideMiddle);

        horizontalLayout->addWidget(listWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        selectPatternsButton = new QPushButton(PatternsDialog);
        selectPatternsButton->setObjectName(QString::fromUtf8("selectPatternsButton"));

        verticalLayout->addWidget(selectPatternsButton);

        label = new QLabel(PatternsDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        depthList = new QSpinBox(PatternsDialog);
        depthList->setObjectName(QString::fromUtf8("depthList"));
        depthList->setEnabled(false);
        depthList->setFrame(true);
        depthList->setReadOnly(true);
        depthList->setMinimum(8);
        depthList->setMaximum(16);
        depthList->setValue(11);

        formLayout->setWidget(0, QFormLayout::FieldRole, depthList);

        label_2 = new QLabel(PatternsDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        channelList = new QComboBox(PatternsDialog);
        channelList->setObjectName(QString::fromUtf8("channelList"));

        formLayout->setWidget(1, QFormLayout::FieldRole, channelList);

        label_3 = new QLabel(PatternsDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        extractLightButton = new QPushButton(PatternsDialog);
        extractLightButton->setObjectName(QString::fromUtf8("extractLightButton"));
        extractLightButton->setEnabled(false);

        verticalLayout->addWidget(extractLightButton);

        extractDarkButton = new QPushButton(PatternsDialog);
        extractDarkButton->setObjectName(QString::fromUtf8("extractDarkButton"));
        extractDarkButton->setEnabled(false);

        verticalLayout->addWidget(extractDarkButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        acceptButton = new QPushButton(PatternsDialog);
        acceptButton->setObjectName(QString::fromUtf8("acceptButton"));
        acceptButton->setEnabled(false);
        acceptButton->setDefault(true);
        acceptButton->setFlat(false);

        verticalLayout->addWidget(acceptButton);

        rejectButton = new QPushButton(PatternsDialog);
        rejectButton->setObjectName(QString::fromUtf8("rejectButton"));

        verticalLayout->addWidget(rejectButton);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(PatternsDialog);
        QObject::connect(rejectButton, SIGNAL(clicked()), PatternsDialog, SLOT(reject()));
        QObject::connect(selectPatternsButton, SIGNAL(clicked()), PatternsDialog, SLOT(selectPatterns()));
        QObject::connect(listWidget, SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)), PatternsDialog, SLOT(selectPatternFromList(QListWidgetItem*)));

        channelList->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PatternsDialog);
    } // setupUi

    void retranslateUi(QDialog *PatternsDialog)
    {
        PatternsDialog->setWindowTitle(QApplication::translate("PatternsDialog", "Create uv map from patterns", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("PatternsDialog", "<no patterns loaded>", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        selectPatternsButton->setText(QApplication::translate("PatternsDialog", "Load patterns...", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("PatternsDialog", "Options:", 0, QApplication::UnicodeUTF8));
        depthList->setSuffix(QApplication::translate("PatternsDialog", " bits", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("PatternsDialog", "Depth", 0, QApplication::UnicodeUTF8));
        channelList->clear();
        channelList->insertItems(0, QStringList()
         << QApplication::translate("PatternsDialog", "Red", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatternsDialog", "Green", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatternsDialog", "Blue", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("PatternsDialog", "Combined", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("PatternsDialog", "Channel", 0, QApplication::UnicodeUTF8));
        extractLightButton->setText(QApplication::translate("PatternsDialog", "Extract lightest image", 0, QApplication::UnicodeUTF8));
        extractDarkButton->setText(QApplication::translate("PatternsDialog", "Extract darkest image", 0, QApplication::UnicodeUTF8));
        acceptButton->setText(QApplication::translate("PatternsDialog", "Make UV Map", 0, QApplication::UnicodeUTF8));
        rejectButton->setText(QApplication::translate("PatternsDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PatternsDialog: public Ui_PatternsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATTERNSDIALOG_H
