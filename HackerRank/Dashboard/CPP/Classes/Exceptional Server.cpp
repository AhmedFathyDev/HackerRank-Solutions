//  Read this: https://www.geeksforgeeks.org/exception-handling-c/
try
{
    cout << Server::compute(A, B) << '\n';
}
catch (bad_alloc &ex)
{
    cout << "Not enough memory\n";
}
catch (exception &ex)
{
    cout << "Exception: " << ex.what() << '\n';
}
catch (...)
{
    cout << "Other Exception\n";
}