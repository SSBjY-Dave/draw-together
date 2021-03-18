#include "../include/drawtogether.h"
#include "../include/ui_drawtogether.h"

#include <QDir>

DrawTogether::DrawTogether(QWidget *parent) : QMainWindow(parent), ui(new Ui::DrawTogether) {

    ui->setupUi(this);
    //this->setStyleSheet("background-color: black;");

    render_area = new RenderArea();
    ui->verticalLayout_canvas->addWidget(render_area);
}

DrawTogether::~DrawTogether()
{
    delete render_area;
    delete ui;
}


void DrawTogether::on_horizontalSlider_hue_sliderMoved(int position)
{
    ui->spinBox_hue->setValue(position);
}

void DrawTogether::on_horizontalSlider_saturation_sliderMoved(int position)
{
    ui->spinBox_saturation->setValue(position);
}

void DrawTogether::on_horizontalSlider_brightness_sliderMoved(int position)
{
    ui->spinBox_brightness->setValue(position);
}

void DrawTogether::on_horizontalSlider_contrast_sliderMoved(int position)
{
    ui->spinBox_contrast->setValue(position);
}

void DrawTogether::on_spinBox_hue_valueChanged(int arg1)
{
    ui->horizontalSlider_hue->setValue(arg1);
}

void DrawTogether::on_spinBox_saturation_valueChanged(int arg1)
{
    ui->horizontalSlider_saturation->setValue(arg1);
}

void DrawTogether::on_spinBox_brightness_valueChanged(int arg1)
{
    ui->horizontalSlider_brightness->setValue(arg1);
}

void DrawTogether::on_spinBox_contrast_valueChanged(int arg1)
{
    ui->horizontalSlider_contrast->setValue(arg1);
}
