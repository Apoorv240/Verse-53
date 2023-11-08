#ifndef APPLICATION_H
#define APPLICATION_H

#include <QMainWindow>
#include <vector>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class Application; }
QT_END_NAMESPACE

class Application : public QMainWindow
{
    Q_OBJECT

public:
    Application(QWidget *parent = nullptr);
    ~Application();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Application *ui;
    int index;
    std::vector<QString> firstLines = {
        "I celebrate myself, and sing myself,",
        "I invite you to read this brief poem,",

        "I step outside,",
        "I use the temporary mask of a jacket,",

        "I see them catch a glimpse,",

        "I see a shadow on the ground,",
        "I see it yearning for release,",

        "I continue on a spring afternoon 6 months later,",

        "I begin to sprout my wings,",

        "I take off my jacket,",
        "I realize no one cares what I wear,",

        "I begin to accept myself for who I am,",
        "I spread my wings,",
    };
    std::vector<QString> secondLines = {
        "as I reflect on who I truly am.",
        "exploring my past, my present, and my future.",

        "hiding my culture from the world.",
        "to hide behind a temporary wall of shame.",

        "of what lies beneath my coated exterior.",

        "a shadow of my true self.",
        "from the captivity of my shame.",

        "the flowers sprouting under my feet.",

        "and shed my cotton prison.",

        "and am hit with a revelation.",
        "and no one notices what I do.",

        "as I break my chains of embarrassment.",
        "and finally fly towards my future.",
    };
};
#endif // APPLICATION_H
