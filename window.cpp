#include <QtWidgets>

#include "window.h"

Window::Window() {
  shapeLabel = new QLabel(tr("Shape"));

  QVBoxLayout* layout = new QVBoxLayout();
  layout->addWidget(shapeLabel);

  setLayout(layout);

  setWindowTitle(tr("Labeled Window"));
}
