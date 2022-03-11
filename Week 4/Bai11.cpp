string pigLatin(string word){
    if(word[0] == 'A' || word[0] == 'E' || word[0] == 'I' ||word[0] == 'O' || word[0] == 'U' || word[0] == 'a' ||word[0] == 'e' || word[0] == 'i' || word[0] == 'o' ||word[0] == 'u'){
         return word+"way";
    }
    else{
        return word.substr(1) + word.substr(0, 1) + "ay";
    }
}