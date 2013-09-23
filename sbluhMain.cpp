#include "sbluh.h"

int main()
{
    if (UpdateAvailable())
    {
        update();
    }
    else
    {
        init();
    }
}
