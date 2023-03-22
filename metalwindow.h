#ifndef METALWINDOW_H
#define METALWINDOW_H

#include <QtGui/QWindow>

class Renderer;

class MetalWindow : public QWindow
{
    Q_OBJECT
public:
    MetalWindow();
    ~MetalWindow();
    void exposeEvent(QExposeEvent *) override;
    bool event(QEvent *ev) override;
    void initMetal();
signals:

private:
    Renderer* renderer;
};

#endif // METALWINDOW_H
