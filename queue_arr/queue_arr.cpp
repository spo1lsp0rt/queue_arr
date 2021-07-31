/*
    Очередь – это динамическая структура данных которая состоит из набора элементов которые размещены последовательно друг за другом.
    При этом добавление элементов осуществляется с одной стороны, а удаление(вытягивание) – с другой стороны.
    Очередь работает по принципу FIFO(First In — First Out), то есть «первым пришел – первым вышел».
*/ 

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int n = 10;
    int queue[n];

    int start = 0, end = 0;

    cout << "Введите поочередно " << n << "элементов очереди." << endl;
    for (int i = 0; i < n; i++) {
        int a;
        cout << endl << i + 1 << "й элемент: ";
        cin >> a;
        queue[end++] = a;
    }

    //front
    cout << endl << "Первый элемент очереди: " << queue[start] << endl;

    //pop
    start++;
    cout << "После удаления элемента первый элемент очереди стал: " << queue[start] << endl;

    //back
    cout << "Последний элемент очереди: " << queue[end - 1] << endl;

    //push
    /*queue[end++] = 777;
    cout << "Добавление элемента. Последний элемент очереди: " << queue[end - 1] << endl;*/

    //empty
    if (start != end) cout << "Очередь заполнена";
    else cout << "Очередь пуста";
    
    return 0;
}