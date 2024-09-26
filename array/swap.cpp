//swap using + -

void swap(int &a, int &b) {
    a = a + b;  // Step 1: a holds the sum of a and b
    b = a - b;  // Step 2: b now holds the original value of a
    a = a - b;  // Step 3: a now holds the original value of b
}



//swap using temp

void swap(int &a, int &b) {
    int temp = a;  // Store value of a in temp
    a = b;         // Assign value of b to a
    b = temp;      // Assign value of temp (original a) to b
}


//swap using xor 


void swap(int &a, int &b) {
    a = a ^ b;  // Step 1: XOR a and b, store result in a
    b = a ^ b;  // Step 2: XOR the new a (which holds a ^ b) with b, b becomes original a
    a = a ^ b;  // Step 3: XOR the new a (which holds a ^ b) with the new b (original a), a becomes original b
}

