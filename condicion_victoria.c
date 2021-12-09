#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>

char *lb1, *lb2, *lb3, *lb4, *lb5, *lb6, *lb7, *lb8, *lb9;
char *figura1 = "X";
char *figura2 = "O";

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void on_clicked_1(GtkWidget *widget, gpointer data) {

    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1= (GtkButton*) widget;
    gtk_button_set_label(button_1, figura1);
    lb1 = gtk_button_get_label(button_1);
    g_print("%s",lb1);
    g_print("Button 1 Clicked\n");
    swap(&figura1, &figura2);

}

void on_clicked_2(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2= (GtkButton*) widget;
    gtk_button_set_label(button_2, figura1);
    lb2 = gtk_button_get_label(button_2);
    g_print("Button 2 Clicked\n");
    swap(&figura1, &figura2);

}

void on_clicked_3(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3= (GtkButton*) widget;
    gtk_button_set_label(button_3, figura1);
    lb3 = gtk_button_get_label(button_3);
    g_print("Button 3 Clicked\n");
    swap(&figura1, &figura2);
}

void on_clicked_4(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_4= (GtkButton*) widget;
    gtk_button_set_label(button_4, figura1);
    lb4 = gtk_button_get_label(button_4);
    g_print("Button 4 Clicked\n");
    swap(&figura1, &figura2);
}

void on_clicked_5(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_5= (GtkButton*) widget;
    gtk_button_set_label(button_5, figura1);
    lb5 = gtk_button_get_label(button_5);
    g_print("Button 5 Clicked\n");
    swap(&figura1, &figura2);
}

void on_clicked_6(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_6= (GtkButton*) widget;
    gtk_button_set_label(button_6, figura1);
    lb6 = gtk_button_get_label(button_6);
    g_print("Button 6 Clicked\n");
    swap(&figura1, &figura2);
}

void on_clicked_7(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_7= (GtkButton*) widget;
    gtk_button_set_label(button_7, figura1);
    lb7 = gtk_button_get_label(button_7);
    g_print("Button 7 Clicked\n");
    swap(&figura1, &figura2);
}


void on_clicked_8(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_8= (GtkButton*) widget;
    gtk_button_set_label(button_8, figura1);
    lb8 = gtk_button_get_label(button_8);
    g_print("Button 8 Clicked\n");
    swap(&figura1, &figura2);
}

void on_clicked_9(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_9= (GtkButton*) widget;
    gtk_button_set_label(button_9, figura1);
    lb9 = gtk_button_get_label(button_9);
    g_print("Button 9 Clicked\n");
    swap(&figura1, &figura2);
}

int main(int argc, char* argv[]) {




    GtkBuilder *builder;
    GtkWidget *window;
    GtkWidget *button_1;
    GtkWidget *button_2;
    GtkWidget *button_3;
    GtkWidget *button_4;
    GtkWidget *button_5;
    GtkWidget *button_6;
    GtkWidget *button_7;
    GtkWidget *button_8;
    GtkWidget *button_9;

    GtkWidget *label;

    gtk_init(&argc, &argv);

    // Get GUI from file
    builder = gtk_builder_new_from_file("glade_template.glade");

    window = GTK_WIDGET(gtk_builder_get_object(builder, "main_window"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    button_1 = GTK_WIDGET(gtk_builder_get_object(builder, "button_1"));
    button_2 = GTK_WIDGET(gtk_builder_get_object(builder, "button_2"));
    button_3 = GTK_WIDGET(gtk_builder_get_object(builder, "button_3"));
    button_4 = GTK_WIDGET(gtk_builder_get_object(builder, "button_4"));
    button_5 = GTK_WIDGET(gtk_builder_get_object(builder, "button_5"));
    button_6 = GTK_WIDGET(gtk_builder_get_object(builder, "button_6"));
    button_7 = GTK_WIDGET(gtk_builder_get_object(builder, "button_7"));
    button_8 = GTK_WIDGET(gtk_builder_get_object(builder, "button_8"));
    button_9 = GTK_WIDGET(gtk_builder_get_object(builder, "button_9"));

    label = GTK_WIDGET(gtk_builder_get_object(builder, "label_1"));

    g_signal_connect(button_1, "clicked", G_CALLBACK(on_clicked_1), NULL);
    g_signal_connect(button_2, "clicked", G_CALLBACK(on_clicked_2), NULL);
    g_signal_connect(button_3, "clicked", G_CALLBACK(on_clicked_3), NULL);
    g_signal_connect(button_4, "clicked", G_CALLBACK(on_clicked_4), NULL);
    g_signal_connect(button_5, "clicked", G_CALLBACK(on_clicked_5), NULL);
    g_signal_connect(button_6, "clicked", G_CALLBACK(on_clicked_6), NULL);
    g_signal_connect(button_7, "clicked", G_CALLBACK(on_clicked_7), NULL);
    g_signal_connect(button_8, "clicked", G_CALLBACK(on_clicked_8), NULL);
    g_signal_connect(button_9, "clicked", G_CALLBACK(on_clicked_9), NULL);

    if (lb1 == lb2 == lb3 && != NULL) {
      g_print("gano %s", lb1);
    }

    // Show and start main loop
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
