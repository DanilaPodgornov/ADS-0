// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    
    int smallNumber = 0;
    int largeNumber = 0;
    int result = 0;
    int modulo = 1;
    int finalResult = 0;

    if (b >= a)
    {
        largeNumber = b;
        smallNumber = a;
    }
    else
    {
        largeNumber = a;
        smallNumber = b;
    }

    while (modulo != 0)
    {
        finalResult = smallNumber;
        result = largeNumber / smallNumber;
        modulo = largeNumber % smallNumber;
        largeNumber = smallNumber;
        smallNumber = modulo;
    }

    return finalResult;
    
}
