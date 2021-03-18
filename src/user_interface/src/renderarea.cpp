#include "../include/renderarea.h"

#include <QPainter>

RenderArea::RenderArea(QWidget *parent) : QWidget(parent) {

    QImage loadedImage;
    loadedImage.load("D:/_Projects/Programming/C++/DrawTogether/DrawTogether/Resources/brush.png");

}
