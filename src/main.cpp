#include <cstddef>  // for std::size_t
#include <iostream>
#include <vector>


int main()
{

    std::vector<float> x = {1e0,
                            1e1,
                            1e2,
                            1e3,
                            1e4,
                            1e5};

    for (int i = 0; i < x.size(); i++) {
        std::cout << x[i] << '\n';
    }

    // std::cout << x.size() << '\n';

    return 0;
}