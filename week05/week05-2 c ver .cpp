char* toLowerCase(char* s) {
    for(int i=0; s[i]!=0; i++){
        char c = s[i];
        if(isupper(c)) c = tolower(c);
        s[i] = c;
    }
    return s;
}