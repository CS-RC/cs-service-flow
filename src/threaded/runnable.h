#ifndef _THREADED_RUNNABLE_H_
#define _THREADED_RUNNABLE_H_

#include "sf_global.h"

#include "base/task.h"

SF_BEGIN_NAMESPACE

class SF_LIBRARY_EXPORT Runnable : public Task {
public:
    Runnable();
    inline virtual ~Runnable() {};

    virtual void precede(Runnable *task);
    virtual void behind(Runnable *task);

    virtual void sameAs(Runnable *task);

protected:
    Runnable(ObjectImpl *impl);

private:
    SF_PRIVATE_CLASS(Runnable)

    void *_p;
};

SF_END_NAMESPACE

#endif // _THREADED_RUNNABLE_H_