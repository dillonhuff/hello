#ifndef HELLO_WINDOW_H
#define HELLO_WINDOW_H

#include <QtWidgets>

class Window : public QWidget {
  Q_OBJECT;

public:
  Window();

private:
  QLabel* shapeLabel;
};

#endif
