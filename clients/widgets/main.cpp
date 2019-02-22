/*
   Copyright (C) 2014-2017 Alexandr Akulich <akulichalexander@gmail.com>

   This file is a part of TelegramQt library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

 */

#include "MainWindow.hpp"
#include <QApplication>

#include <QLocale>
#include <QDebug>

#include <QLoggingCategory>

Q_LOGGING_CATEGORY(cat, "telegram", QtInfoMsg)

int main(int argc, char *argv[])
{

    qCCritical(cat) << "qCCritical";
    qCWarning(cat) << "qCWarning";
    qCInfo(cat) << "qCInfo";
    qCDebug(cat) << "qCDebug";
    return  0;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
