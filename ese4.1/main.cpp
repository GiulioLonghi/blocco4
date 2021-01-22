#include <iostream>
#include <stdlib.h>

#include "numbersCategories.hpp"

using namespace std;

int main()
{
    int start, stop;
    cout << "Insert starting number: ";
    cin >> start;
    cout << "Insert ending number: ";
    cin >> stop;

    if (start > stop || start <= 0) {
        cout << "Invalid interval. Exiting.";
        return -1;
    }

    for (int i = start; i < stop; i++) {
        cout << i;

        if (isAbundant(i))
            cout << "\tabundant";

        if (isDeficient(i))
            cout << "\tdeficient";

        if (isAbundantPrimitive(i))
            cout << "\tabundantPrimitive";

        if (isSemiPerfect(i))
            cout << "\tsemiPerfect";

        if (isWeird(i))
            cout << "\tweird";

        cout << endl;
    }

    return 0;
}
