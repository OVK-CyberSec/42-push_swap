


void   skip_sep(char *str, char sep)
{
    while (*str == sep)
            str++;
}

int count_words(char **str, char sep)
{
    int count;
    
    count = 0;
    while(*str)
    {
        if (sep == *str)
        {
            count++;
            skip_sep(str, sep);
        }
        str++;
    }
    return (count);
}

char    **word_splitter(char *word, char sep)
{
    char **split;
    
    *split = malloc(sizeof(char *) * count_words(*split, sep) + 1);
    

}


char	**ft_split(char *str, char separator)
{

}