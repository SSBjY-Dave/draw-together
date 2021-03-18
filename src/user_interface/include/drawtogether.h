#ifndef DRAWTOGETHER_H
#define DRAWTOGETHER_H

#include <QMainWindow>

#include "renderarea.h"

QT_BEGIN_NAMESPACE
namespace Ui { class DrawTogether; }
QT_END_NAMESPACE

class DrawTogether : public QMainWindow
{
    Q_OBJECT

    public:
        DrawTogether(QWidget *parent = nullptr);
        ~DrawTogether();

    private:
        Ui::DrawTogether *ui;
        RenderArea* render_area;

    protected:
        //void closeEvent(QCloseEvent *event) override;

    private slots:
        void on_horizontalSlider_hue_sliderMoved(int position);

        void on_spinBox_hue_valueChanged(int arg1);

        void on_horizontalSlider_saturation_sliderMoved(int position);

        void on_horizontalSlider_brightness_sliderMoved(int position);

        void on_horizontalSlider_contrast_sliderMoved(int position);

        void on_spinBox_saturation_valueChanged(int arg1);

        void on_spinBox_brightness_valueChanged(int arg1);

        void on_spinBox_contrast_valueChanged(int arg1);

};
#endif // DRAWTOGETHER_H
