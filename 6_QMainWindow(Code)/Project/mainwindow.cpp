#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(400, 300);

    //Menu Bar
    QMenuBar *menubar = new QMenuBar(this);
    setMenuBar(menubar);

    QMenu *filemeun = menubar->addMenu("文件(&F)");
    filemeun->addAction("新建文件");
    filemeun->addAction("打开文件");
    filemeun->addAction("保存文件");
    filemeun->addAction("关闭文件");

    QMenu *editmenu = menubar->addMenu("编辑(&E)");
    editmenu->addAction("撤回");
    editmenu->addAction("复制");
    editmenu->addAction("粘贴");
    editmenu->addAction("剪切");

    QMenu *helpmenu = menubar->addMenu("帮助(&B)");
    helpmenu->addAction("目录");
    helpmenu->addAction("索引");
    helpmenu->addAction("上下文");
    helpmenu->addAction("技术支持");

    //Tool Bar
    QToolBar *toolbar = new QToolBar(this);
    addToolBar(Qt::TopToolBarArea, toolbar);
    toolbar->addAction("字体");
    toolbar->addAction("字号");
    toolbar->addAction("颜色");
    toolbar->addSeparator();
    toolbar->addAction("行距 ");
    toolbar->addAction("底纹");
    toolbar->addAction("对齐方式");

    //Status Bar
    QStatusBar *stbar = new QStatusBar(this);
    setStatusBar(stbar);
    QLabel *label = new QLabel(this);
    label->setText("状态栏");
    stbar->addWidget(label);

    //Dock Widget
    QDockWidget *dockweight = new QDockWidget("项目", this);
    addDockWidget(Qt::LeftDockWidgetArea, dockweight);

    //Central Widget
    QTextEdit *edit = new QTextEdit(this);
    setCentralWidget(edit);


}

MainWindow::~MainWindow()
{

}
