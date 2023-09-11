template <typename T>
T Calculator<T>::add(T a, T b)
{
    return a + b;
}

template <typename T>
T Calculator<T>::subtract(T a, T b)
{
    return a - b;
}

template <typename T>
T Calculator<T>::multiply(T a, T b)
{
    return a * b;
}

template <typename T>
T Calculator<T>::divide(T a, T b)
{
    if (b == 0)
    {
        throw "Division by zero";
    }
    return a / b;
}

template <typename T>
T Calculator<T>::percentage(T a, T b)
{
    return (a * b) / 100;
}

template <typename T>
T Calculator<T>::squareRoot(T a)
{
    if (a < 0)
    {
        throw "Square root of a negative number";
    }
    return std::sqrt(a);
}

template <typename T>
T Calculator<T>::square(T a)
{
    return a * a;
}

template <typename T>
T Calculator<T>::power(T base, T exponent)
{
    return std::pow(base, exponent);
}

template <typename T>
T Calculator<T>::naturalLog(T a)
{
    if (a <= 0)
    {
        throw "Natural logarithm of a non-positive number";
    }
    return std::log(a);
}

template <typename T>
T Calculator<T>::logBase10(T a)
{
    if (a <= 0)
    {
        throw "Logarithm base 10 of a non-positive number";
    }
    return std::log10(a);
}
