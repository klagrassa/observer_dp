#ifndef __SUBJECT_H
#define __SUBJECT_H

#include "Observer.h"

/**
 * @brief Virtual class for Subject from the Observer design pattern 
 * 
 */
class Subject {

    protected:
    virtual void notify() = 0;
    virtual void attach(Observer*) = 0;
    virtual void detach(Observer*) = 0;

    protected:
    Observer* observer;

};


#endif // __SUBJECT_H