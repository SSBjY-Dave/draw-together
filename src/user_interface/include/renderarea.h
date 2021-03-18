#ifndef RENDERAREA_H
#define RENDERAREA_H

#include <QColor>
#include <QImage>
#include <QPoint>
#include <QWidget>

class RenderArea : public QWidget
{
    Q_OBJECT

    public:
        RenderArea(QWidget *parent = 0);

    protected:
        //void mousePressEvent(QMouseEvent *event) override;
        //void mouseMoveEvent(QMouseEvent *event) override;
        //void mouseReleaseEvent(QMouseEvent *event) override;

        //void paintEvent(QPaintEvent *event) override;
        //void resizeEvent(QResizeEvent *event) override;
};

#endif // RENDERAREA_H
