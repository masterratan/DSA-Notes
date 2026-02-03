// [] is called capture clause.
// It is used to capture variables from the OUTER scope.
// Example:
// int x, y;
// [x, y]      -> capture by value
// [&x, &y]    -> capture by reference
// [=]         -> capture everything by value
// [&]         -> capture everything by reference

sort(begin(vec), end(vec), [](int a, int b){
    return a > b;
});

// Or

auto lambda = [&](int a, int b){
    return a > b;
};

sort(begin(vec), end(vec), lambda);