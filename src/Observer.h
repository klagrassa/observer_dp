#ifndef __OBSERVER_H
#define __OBSERVER_H

/**
 * @brief Virtual class representing the observer from the Observer
 * design pattern 
 * 
 */
class Observer {

    protected:
    int id;

    public:
    virtual void update() = 0;
    virtual int getObserverId() = 0;
};

#endif // __OBSERVER_H