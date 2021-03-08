#ifndef CSTRING_H
#define CSTRING_H
class CString
{
private:
    // добавляемое слово
    char *m_word;
    //размер этого слова + нулевой символ
    int   m_size;
public:
    friend class CVector;
    CString();
    CString(char s);
    CString(const char *str);
    CString(const CString &new_word);
    CString(int n);
    ~CString();

    CString& operator=(const CString &str);
    CString& operator=(const char *str);
    CString& operator=(char s);
    CString& operator=(int n);

    /*************************************************************
     * size - возвращает размер m_word
     *************************************************************
    */
    int size();

    /*************************************************************
     * at - возвращает ссылку на выбранный символ массива m_word
     * n  - порядковый номер символа
     *************************************************************
    */
    char& at(int n);

    /*************************************************************
     * front - возвращает 1 элемент m_word
     *************************************************************
    */
    char& front();

    /*************************************************************
     * back - возвращает предпоследний элемент m_word
     *************************************************************
    */
    char& back();

    /*************************************************************
     * data - возвращает указатель на m_word
     *************************************************************
    */
    char* data();

    /*************************************************************
     * empty - проверяет пустой ли объект
     *************************************************************
    */
    bool empty();

    /*************************************************************
     * erase - удаляет символы m_word в диапазоне first - last и
               возвращает изменённый m_word
     *************************************************************
    */
    CString& erase(int first, int last);

    /*************************************************************
     * erase - удаляет все символы s в m_word и возвращает ссылку
               на изменённый m_word
     *************************************************************
    */
    CString& erase(char s);

    /*************************************************************
     * push_back - добавляет символ s в конец m_word
     *************************************************************
    */
    void push_back(char s);

    /*************************************************************
     * push_back - добавляет str в конец m_word
     *************************************************************
    */
    void push_back(const CString &str);

    /*************************************************************
     * pop_back - добавляет удаляет предпоследний элемент в m_word
     *************************************************************
    */
    void pop_back();

    /*************************************************************
     * compare - сравнивает два объекта, возвращает true
                 если совпали все символы
     *************************************************************
    */
    bool compare(const CString &str);

    /*************************************************************
     * find - ищет s в m_word и возвращает его порядковый номер
     *************************************************************
    */
    int find(char s);

    /*************************************************************
     * find - ищет str в m_word и возвращает номер в m_word,
              с которого str начинается
     *************************************************************
    */
    int find(const CString &str);

    /*************************************************************
     * rfind - ищет s в m_word с конца и возвращает его
               порядковый номер
     *************************************************************
    */
    int rfind(char s);

    /*************************************************************
     * rfind - ищет str в m_word с конца и возвращает номер
               в m_word, с которого str начинается
     *************************************************************
    */
    int rfind(const CString &str);

    CString& operator+=(const CString &str);
    CString& operator+=(char s);
    CString& operator+=(const char *str);
    CString& operator+(char s);
    CString& operator+(const char *str);
    friend const char* operator+(const CString &str1, const CString &str2);
    bool operator!=(const CString &str);
    bool operator==(const CString &str);
    bool operator<=(const CString &str);
    bool operator>=(const CString &str);

    /*************************************************************
     * stoi - переводит массив char в число типа int
              и возвращает это число
     *************************************************************
    */
    int  stoi();

    /*************************************************************
     * stof - переводит массив char в число типа double
              и возвращает это число
     *************************************************************
    */
    double stof();

    /*************************************************************
     * stoi - переводит m_word объекта str в число типа int
              и возвращает это число
     *************************************************************
    */
    int stoi(const CString &str);

    /*************************************************************
     * stof - переводит m_word объекта str в число типа double
              и возвращает это число
     *************************************************************
    */
    double stof(const CString &str);

    /*************************************************************
     * to_string - переводит n типа int в m_word объекта класса
                   CString и возвращает этот объект
     *************************************************************
    */
    CString& to_string(int n);

    /*************************************************************
     * to_string - переводит n типа double в m_word объекта класса
                   CString и возвращает этот объект
     *************************************************************
    */
    CString& to_string(double n);


};
#endif // CSTRING_H