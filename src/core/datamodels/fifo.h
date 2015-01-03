#ifndef FIFO_H
#define FIFO_H

#include "abstractqueue.h"

class AbstractListItem;

/**
 * @brief The Fifo class
 */
class Fifo : public AbstractQueue {

public :

    Fifo(QObject * parent = 0);
    Fifo(AbstractListItem * prototype, int size, QObject * parent = 0);
    ~Fifo();

    bool                enqueue (AbstractListItem* item);
    bool                enqueue (QList<AbstractListItem*> items, int &enquededNumber);
    AbstractListItem*   dequeue ();

signals:

public slots:


};

#endif // FIFO_H