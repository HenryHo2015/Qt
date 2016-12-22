#include <QApplication>
#include <QLabel>

//My first Qt app
int main(int argc,char *argv[])
{
        QApplication app(argc,argv);
        QLabel *label * new QLabel("Hello Qt");
        label->show();
        return app.exec();
}

//("<h1><font.color = red>Hello </font> <br>Qt</br></h1>");
