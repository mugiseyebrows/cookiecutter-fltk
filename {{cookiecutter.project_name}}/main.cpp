#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_PNG_Image.H>
#include "app_icon.h"

int main(int argc, char **argv) {
    Fl_Double_Window* window = new Fl_Double_Window(640, 480, "{{cookiecutter.project_name}}");
    Fl_PNG_Image* image = new Fl_PNG_Image("app_icon.png", app_icon, app_icon_len);
    window->icon(image);
    window->resizable(window);
    window->show(argc, argv);
    return Fl::run();
}