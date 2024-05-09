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
    long size = (floor(log10(x))+1);
    char str[size + 1]; // including '/0'
    sprintf(str, "%l", x);

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

    int solution = 2;

    switch(solution){
        case 1:
            return by_str(x);            
            break;
        case 2:
            return by_int(x);
            break;
        default:
            return false;
            break;
    }
}