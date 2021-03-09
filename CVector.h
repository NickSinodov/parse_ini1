#ifndef CVECTOR_H
#define CVECTOR_H
#include "CString.h"
class CVector
{
private:
    /*!
     * \brief m_count    - текущее количество элементов в векторе
     *        m_capacity - ёмкость вектора
     *        container  - указатель на вектор
     */
    unsigned int m_count;
    unsigned int m_capacity;
    CString *container;


public:

    CVector();
    CVector(int n);
    ~CVector();

    /*!
     * \brief push_back - добавляет объект CString в конец массива
     * \param str       - объект CString
     */
    void push_back(const CString &str);

    /*!
     * \brief size
     * \return возвращает m_capacity текущего объекта CVector, если объект пустой возвращет 0
     */
    int size();

    /*!
     * \brief push_front - добавление объекта CString в начало массива
     * \param str        - добавляемый объект
     */
    void push_front(const CString &str);

    /*!
     * \brief is_empty
     * \return возвращет true если пустой, иначе false
     */
    bool is_empty();

    /*!
     * \brief at - доступ к элементу массива по указанному номеру и демонстрация содержимого этого элемента
     * \param n  - номер элемента
     * \return   - возвращает указанный n-номер массива если <= m_count, и 0 если иначе
     */
    int at(int n);

    /*!
     * \brief front - доступ к 1 элементу массива
     * \return      - возвращает размер объекта CString
     */
    int front();

    /*!
     * \brief back - доступ к последнему элементу массива
     * \return     - возвращает размер объекта CString
     */
    int back();


};
#endif // CVECTOR_H















