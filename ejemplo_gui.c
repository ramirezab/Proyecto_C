#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>

char *figura = "X";
void on_clicked_1(GtkWidget *widget, gpointer data) {
    
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_1= (GtkButton*) widget;
    gtk_button_set_label(button_1, figura);
    g_print("Button 1 Clicked\n");

}

void on_clicked_2(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_2= (GtkButton*) widget;
    gtk_button_set_label(button_2, figura);
    g_print("Button 2 Clicked\n");
}

void on_clicked_3(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_3= (GtkButton*) widget;
    gtk_button_set_label(button_3, figura);
    g_print("Button 2 Clicked\n");
}

void on_clicked_4(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_4= (GtkButton*) widget;
    gtk_button_set_label(button_4, figura);
    g_print("Button 2 Clicked\n");
}

void on_clicked_5(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_5= (GtkButton*) widget;
    gtk_button_set_label(button_5, figura);
    g_print("Button 2 Clicked\n");
}

void on_clicked_6(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_6= (GtkButton*) widget;
    gtk_button_set_label(button_6, figura);
    g_print("Button 2 Clicked\n");
}

void on_clicked_7(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_7= (GtkButton*) widget;
    gtk_button_set_label(button_7, figura);
    g_print("Button 2 Clicked\n");
}


void on_clicked_8(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_8= (GtkButton*) widget;
    gtk_button_set_label(button_8, figura);
    g_print("Button 2 Clicked\n");
}

void on_clicked_9(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    GtkButton *button_9= (GtkButton*) widget;
    gtk_button_set_label(button_9, figura);
    g_print("Button 2 Clicked\n");
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

    // Show and start main loop
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
