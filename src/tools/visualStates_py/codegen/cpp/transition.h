/*
   Copyright (C) 1997-2017 JDERobot Developers Team

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU Library General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <http://www.gnu.org/licenses/>.

   Authors : Okan Asik (asik.okan@gmail.com)

*/
#ifndef TRANSITION_H
#define TRANSITION_H

class Transition {
protected:
    int id;
    int destinationId;

public:
    Transition(int id, int destinationId);

    int getDestinationId();

    virtual void init() = 0;
    virtual void runCode() = 0;
    virtual bool checkCondition() = 0;
};

#endif