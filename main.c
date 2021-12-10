#include <gtk/gtk.h>
#include <stdio.h>
#include <string.h>

// Valores para inicializar la comparación de figuras
char *lb1 = "a";
char *lb2 = "b";
char *lb3 = "c";
char *lb4 = "d";
char *lb5 = "e";
char *lb6 = "f";
char *lb7 = "g";
char *lb8 = "h";
char *lb9 = "i";

// Figuras del juego
char *figura1 = "X";
char *figura2 = "O";

// Declaración de los botones
GtkButton *button_1;
GtkButton *button_2;
GtkButton *button_3;
GtkButton *button_4;
GtkButton *button_5;
GtkButton *button_6;
GtkButton *button_7;
GtkButton *button_8;
GtkButton *button_9;
GtkWidget *label_victory;
GtkWidget *label_figura;

//  Esta función cambia el valor de la figura cuando se clikea en un cuadro
void swap(char **a, char **b) {
    char *temp = *a;
    *a = *b;
    *b = temp;
}

// Asigna la figura a una variable para analizarla
void set_char(char **a, char **b){

    *a = *b;

}
void clean_board();



// Mediante la función "strcmp" se comparan los valores de las variables
// para elegir a un ganador

void condicion_victoria(){



    if (strcmp(lb1, lb2) == 0 && strcmp(lb2, lb3) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();

    }
    else if (strcmp(lb4, lb5) == 0 && strcmp(lb5, lb6) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();
    }
    else if (strcmp(lb7, lb8) == 0 && strcmp(lb8, lb9) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();
    }
    else if (strcmp(lb1, lb4) == 0 && strcmp(lb4, lb7) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();
    }
    else if (strcmp(lb2, lb5) == 0 && strcmp(lb5, lb8) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();
    }
    else if (strcmp(lb3, lb6) == 0 && strcmp(lb6, lb9) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();
    }
    else if (strcmp(lb1, lb5) == 0 && strcmp(lb5, lb9) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();
    }
    else if (strcmp(lb3, lb5) == 0 && strcmp(lb5, lb7) == 0){
        g_print("Victoria de %s", figura1);
        gtk_label_set_text(label_victory, "Victoria de");
        gtk_label_set_text(label_figura, figura1);
        clean_board();
    }

}


// Función al clickear el boton 1
void on_clicked_1(GtkWidget *widget, gpointer data) {
    
    button_1 = (GtkButton*) widget;
    gtk_button_set_label(button_1, figura1);
    set_char(&lb1, &figura1);
    g_print("%s \n",lb1);
    g_print("Button 1 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);

}

// Función al clickear el boton 2
void on_clicked_2(GtkWidget *widget, gpointer data) {
    
    button_2= (GtkButton*) widget;
    gtk_button_set_label(button_2, figura1);
    set_char(&lb2, &figura1);
    g_print("%s \n",lb2);
    g_print("Button 2 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);

}

// Función al clickear el boton 3
void on_clicked_3(GtkWidget *widget, gpointer data) {
    
    button_3= (GtkButton*) widget;
    gtk_button_set_label(button_3, figura1);
    set_char(&lb3, &figura1);
    g_print("%s \n",lb3);
    g_print("Button 3 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

// Función al clickear el boton 4
void on_clicked_4(GtkWidget *widget, gpointer data) {
    
    button_4= (GtkButton*) widget;
    gtk_button_set_label(button_4, figura1);
    set_char(&lb4, &figura1);
    g_print("%s \n",lb4);
    g_print("Button 4 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

// Función al clickear el boton 5
void on_clicked_5(GtkWidget *widget, gpointer data) {
    
    button_5= (GtkButton*) widget;
    gtk_button_set_label(button_5, figura1);
    set_char(&lb5, &figura1);
    g_print("%s \n",lb5);
    g_print("Button 5 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

// Función al clickear el boton 6
void on_clicked_6(GtkWidget *widget, gpointer data) {
    
    button_6= (GtkButton*) widget;
    gtk_button_set_label(button_6, figura1);
    set_char(&lb6, &figura1);
    g_print("%s \n",lb6);
    g_print("Button 6 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

// Función al clickear el boton 7
void on_clicked_7(GtkWidget *widget, gpointer data) {
    
    button_7= (GtkButton*) widget;
    gtk_button_set_label(button_7, figura1);
    set_char(&lb7, &figura1);
    g_print("%s \n",lb7);
    g_print("Button 7 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

// Función al clickear el boton 8
void on_clicked_8(GtkWidget *widget, gpointer data) {
    
    button_8= (GtkButton*) widget;
    gtk_button_set_label(button_8, figura1);
    set_char(&lb8, &figura1);
    g_print("%s \n",lb8);
    g_print("Button 8 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

// Función al clickear el boton 9
void on_clicked_9(GtkWidget *widget, gpointer data) {
    
    button_9= (GtkButton*) widget;
    gtk_button_set_label(button_9, figura1);
    set_char(&lb9, &figura1);
    g_print("%s \n",lb9);
    g_print("Button 9 Clicked\n");
    condicion_victoria();
    swap(&figura1, &figura2);
}

// Reinicia el juego y limpia los labels de los botones a un espacio vacio
// para volver a jugar, al igual que reinicia las variables a sus valores
// de iniciación
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



// Ciclo principal del programa
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


    // Inicializador del GTK
    gtk_init(&argc, &argv);

    // Se obtiene el menu del archivo glade
    builder = gtk_builder_new_from_file("glade_template.glade");

    // GTK obtiene la ventana principal
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

    // Muestra el mensaje del label
    label = GTK_WIDGET(gtk_builder_get_object(builder, "label_1"));
    label_victory= GTK_WIDGET(gtk_builder_get_object(builder, "label_victory"));
    label_figura= GTK_WIDGET(gtk_builder_get_object(builder, "label_figura"));

    GtkLabel *label_victory = (GtkLabel*) label_victory;
    GtkLabel *label_figura = (GtkLabel*) label_figura;

    // Señales de coneccion de cada uno de los botones
    g_signal_connect(button_1, "clicked", G_CALLBACK(on_clicked_1), NULL);
    g_signal_connect(button_2, "clicked", G_CALLBACK(on_clicked_2), NULL);
    g_signal_connect(button_3, "clicked", G_CALLBACK(on_clicked_3), NULL);
    g_signal_connect(button_4, "clicked", G_CALLBACK(on_clicked_4), NULL);
    g_signal_connect(button_5, "clicked", G_CALLBACK(on_clicked_5), NULL);
    g_signal_connect(button_6, "clicked", G_CALLBACK(on_clicked_6), NULL);
    g_signal_connect(button_7, "clicked", G_CALLBACK(on_clicked_7), NULL);
    g_signal_connect(button_8, "clicked", G_CALLBACK(on_clicked_8), NULL);
    g_signal_connect(button_9, "clicked", G_CALLBACK(on_clicked_9), NULL);




    // Muestra e inicia la ventana del juego
    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}
