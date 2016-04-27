#include <iostream>
#include "nse_mysqlconnector.hpp"
#include <gtk/gtk.h>




//Tu dokonałem zmiany testowej ;p
 void ShowMessage(const char* msg)
    {
        std::cerr << msg << std::endl;
        GtkWidget* dialog = gtk_message_dialog_new (NULL, GTK_DIALOG_MODAL, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "Error");
        gtk_message_dialog_format_secondary_text (GTK_MESSAGE_DIALOG (dialog), "%s", msg);
        gtk_dialog_run(GTK_DIALOG (dialog));
        gtk_widget_destroy(GTK_WIDGET(dialog));
    }

int main(int argc, char *argv[])
{
std::cout<<"MS x\n";
std::cout<<"\nHello World by Klient NSE \n\n";
   gtk_init( & argc, & argv );

   ShowMessage("Witaj świecie ;)");

   gtk_main();

return 0;
}
