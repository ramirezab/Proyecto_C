#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>

char *lb1 = "a";
char *lb2 = "b";
char *lb3 = "c";
char *lb4 = "d";
char *lb5 = "e";
char *lb6 = "f";
char *lb7 = "g";
char *lb8 = "h";
char *lb9 = "i";
char *figura1 = "X";
char *figura2 = "O";

GtkButton *button_1;
GtkButton *button_2;
GtkButton *button_3;
GtkButton *button_4;
GtkButton *button_5;
GtkButton *button_6;
GtkButton *button_7;
GtkButton *button_8;
GtkButton *button_9;

void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

void set_char(char **a, char **b){

    *a = *b;

}
void clean_board();


void condicion_victoria(){

    if (strcmp(lb1, lb2) == 0 && strcmp(lb2, lb3) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }
    else if (strcmp(lb4, lb5) == 0 && strcmp(lb5, lb6) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }
    else if (strcmp(lb7, lb8) == 0 && strcmp(lb8, lb9) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }
    else if (strcmp(lb1, lb4) == 0 && strcmp(lb4, lb7) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }
    else if (strcmp(lb2, lb5) == 0 && strcmp(lb5, lb8) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }
    else if (strcmp(lb3, lb6) == 0 && strcmp(lb6, lb9) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }
    else if (strcmp(lb1, lb5) == 0 && strcmp(lb5, lb9) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }
    else if (strcmp(lb3, lb5) == 0 && strcmp(lb5, lb7) == 0){
        g_print("Victoria de %s", figura1);
        clean_board();
    }

}
/*
void message_winner() {
      GtkWidget *window *dialog, *label, *container;
      dialog = gtk_dialog_new();
      gtk_window_set_transient_for(GTK_WINDOW(dialog),GTK_WINDOW(window));
      gtk_window_set_title(GTK_WINDOW(dialog), "GANADOR");
      gtk_window_set_size_request(dialog, 400, 200);

      label = gtk_label_new(figura1);
      container = gtk_dialog_get_content_area(GTK_DIALOG(dialog));
      gtk_container_add(GTK_CONTAINER(container),label);

      gtk_widget_show(dialog);
}
*/

void on_clicked_1(GtkWidget *widget, gpointer data) {

    GtkLabel *label = (GtkLabel*) data;
    button_1 = (GtkButton*) widget;
    gtk_button_set_label(button_1, figura1);
    set_char(&lb1, &figura1);
    g_print("%s \n",lb1);
    g_print("Button 1 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);

}

void on_clicked_2(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_2= (GtkButton*) widget;
    gtk_button_set_label(button_2, figura1);
    set_char(&lb2, &figura1);
    g_print("%s \n",lb2);    
    g_print("Button 2 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);

}

void on_clicked_3(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_3= (GtkButton*) widget;
    gtk_button_set_label(button_3, figura1);
    set_char(&lb3, &figura1);
    g_print("%s \n",lb3);
    g_print("Button 3 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

void on_clicked_4(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_4= (GtkButton*) widget;
    gtk_button_set_label(button_4, figura1);
    set_char(&lb4, &figura1);
    g_print("%s \n",lb4);
    g_print("Button 4 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

void on_clicked_5(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_5= (GtkButton*) widget;
    gtk_button_set_label(button_5, figura1);
    set_char(&lb5, &figura1);
    g_print("%s \n",lb5);
    g_print("Button 5 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

void on_clicked_6(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_6= (GtkButton*) widget;
    gtk_button_set_label(button_6, figura1);
    set_char(&lb6, &figura1);
    g_print("%s \n",lb6);
    g_print("Button 6 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

void on_clicked_7(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_7= (GtkButton*) widget;
    gtk_button_set_label(button_7, figura1);
    set_char(&lb7, &figura1);
    g_print("%s \n",lb7);
    g_print("Button 7 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}


void on_clicked_8(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_8= (GtkButton*) widget;
    gtk_button_set_label(button_8, figura1);
    set_char(&lb8, &figura1);
    g_print("%s \n",lb8);
    g_print("Button 8 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

void on_clicked_9(GtkWidget *widget, gpointer data) {
    GtkLabel *label = (GtkLabel*) data;
    button_9= (GtkButton*) widget;
    gtk_button_set_label(button_9, figura1);
    set_char(&lb9, &figura1);
    g_print("%s \n",lb9);
    g_print("Button 9 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

void clean_board(){

    gtk_button_set_label(button_1, " ");
    gtk_button_set_label(button_2, " ");
    gtk_button_set_label(button_3, " ");
    gtk_button_set_label(button_4, " ");
    gtk_button_set_label(button_5, " ");
    gtk_button_set_label(button_6, " ");
    gtk_button_set_label(button_7, " ");
    gtk_button_set_label(button_8, " ");
    gtk_button_set_label(button_9, " ");
    lb1 = "a";
    lb2 = "b";
    lb3 = "c";
    lb4 = "d";
    lb5 = "e";
    lb6 = "f";
    lb7 = "g";
    lb8 = "h";
    lb9 = "i";
        
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
