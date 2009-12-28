/*
 * This file is part of the Shiboken Python Binding Generator project.
 *
 * Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * Contact: PySide team <contact@pyside.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation. Please
 * review the following information to ensure the GNU Lesser General
 * Public License version 2.1 requirements will be met:
 * http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
 *
 * As a special exception to the GNU Lesser General Public License
 * version 2.1, the object code form of a "work that uses the Library"
 * may incorporate material from a header file that is part of the
 * Library.  You may distribute such object code under terms of your
 * choice, provided that the incorporated material (i) does not exceed
 * more than 5% of the total size of the Library; and (ii) is limited to
 * numerical parameters, data structure layouts, accessors, macros,
 * inline functions and templates.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 */

#ifndef LISTUSER_H
#define LISTUSER_H

#include <list>
#include "complex.h"
#include "point.h"

#include "libsamplemacros.h"

class LIBSAMPLE_API ListUser
{
public:
    typedef std::list<Point*> PointList;

    ListUser() {}
    ListUser(const ListUser& other) : m_lst(other.m_lst) {}
    ~ListUser() {}

    virtual std::list<int> createList();
    std::list<int> callCreateList();

    static std::list<Complex> createComplexList(Complex cpx0, Complex cpx1);

    double sumList(std::list<int> vallist);
    double sumList(std::list<double> vallist);

    static void multiplyPointList(PointList& points, double multiplier);

    void setList(std::list<int> lst) { m_lst = lst; }
    std::list<int> getList() { return m_lst; }

private:
    std::list<int> m_lst;
};

#endif // LISTUSER_H
