#pragma once

#include <QObject>
#include <QDebug>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QPoint>
#include <QSharedPointer>
#include <QString>
#include <QWindow>
#include <QtQuick/QQuickView>
#include <QtQuick/QQuickWindow>
#include <QtWidgets/qwidget.h>

#include <qt_windows.h>

#include "ui_qappwindow.h"

class qAppWindow : public QWidget
{
	Q_OBJECT

public:
	qAppWindow(QWidget *parent = Q_NULLPTR);
	~qAppWindow();

private:
	Ui::qAppWindow ui;
	HWND m_hwnd;
	void setWindowBlur(unsigned int style = 3);
};
