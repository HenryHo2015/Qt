#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
      QApplication app(argc, argv);

      QLabel label("Hello Qt!");
      label.show();

     return app.exec();
}

//("<h1><font.color = red>Hello </font> <br>Qt</br></h1>");
