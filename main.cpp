#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it
    int first_array[10] = {4,2,5,2,3,4,1,4,5,2};
    int bounds[2] = {first_array[0],first_array[0]};
    // count elements

    //find the min and max
    for (int i = 0; i < 10; i++) {
        if (bounds[0] > first_array[i]) {
            bounds[0] = first_array[i];
        }
        if (bounds[1] < first_array[i]) {
            bounds[1] = first_array[i];
        }
    }

    cout << "The minimum value of the array: " << bounds[0] << endl;
    cout << "The maximum value of the array: " << bounds[1] << endl;


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}