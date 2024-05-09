bool by_int(long x){
    
    // compare after inverse
    long temp = x;
    long after = 0;

    // inverse
    while(temp != 0){
        after = after * 10 + temp % 10;
        temp = temp / 10;
    }

    if(x == after){
        return true;
    }else{
        return false;
    }
}

bool by_str(long x){
    // transfer to string
    int size = (floor(log10(x))+1);
    char str[size + 1]; // including '/0'
    sprintf(str, "%d", x);

    int left = 0;
    int right = size - 1;
    while (left <= right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }    
    return true;
}

bool isPalindrome(long x) {
    
    if(x < 0){
        return false;
    }
    else if(x == 0){
        return true;
    }

    int solution = 1;

    switch(solution){
        case 1:
            return by_str(x); // 15ms       
            break;
        case 2:
            return by_int(x); // 7ms
            break;
        default:
            return false;
            break;
    }
}