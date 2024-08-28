#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[3] = {232, 34, 8};
    size_t numberOfEle = sizeof(numbers) / sizeof(numbers[0]);
    int greatest = 0;
    for (int i = 0; i < numberOfEle; i++){
        if (numbers[i] > greatest) {
            greatest = numbers[i];
            continue;
        };
    };
    
    printf("Goat %d\n", greatest);
    return 0;
}
