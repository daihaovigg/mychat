#include <QtGui/QApplication>
#include "qmlapplicationviewer.h"

#include "widget.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));
     Widget w;
       QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    #if defined(Q_WS_S60)
        w.showMaximized();
    #else
        w.show();
    #endif
    return app->exec();
}
