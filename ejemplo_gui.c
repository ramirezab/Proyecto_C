#include <gtk/gtk.h>


void on_clicked_blue(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "BLUE");
    g_print("Blue Button Clicked\n");
}

void on_clicked_red(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    gtk_label_set_text(label, "RED");
    g_print("Red Button Clicked\n");
}

int main(int argc, char* argv[]) {
    GtkBuilder *builder;
    GtkWidget *window;
    GtkWidget *button_blue;
    GtkWidget *button_red;
    GtkWidget *label;

    gtk_init(&argc, &argv);

    // Get GUI from file
    builder = gtk_builder_new_from_file("glade_template.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    button_red = GTK_WIDGET(gtk_builder_get_object(builder, "button_red"));
    button_blue = GTK_WIDGET(gtk_builder_get_object(builder, "button_blue"));
    label = GTK_WIDGET(gtk_builder_get_object(builder, "label_1"));

    g_signal_connect(button_red, "clicked", G_CALLBACK(on_clicked_red), label);
    g_signal_connect(button_blue, "clicked", G_CALLBACK(on_clicked_blue), label);

    // Show and start main loop
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
