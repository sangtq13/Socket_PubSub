#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
  virtual void Update(void* data) = 0;
};

#endif /* OBSERVER_H */
