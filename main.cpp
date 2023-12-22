#include <fstream>
#include <complex>
#include <bits/stdc++.h>

using namespace std;

int value(int x, int y) {
    std::complex<float> point((float)x/800-1.5, (float)y/800-0.5);
    std::complex<float> z(0, 0);
    unsigned int nb_iter = 0;
    while (abs(z) < 2 && nb_iter <= 34) {
        z = z * z + point;
        nb_iter++;
    }
    if (nb_iter < 34) return (255*nb_iter)/33;
    else return 0;
}

int main() {
    std::ofstream my_Image("mandelbrot.ppm");
    if (my_Image.is_open()) {
        my_Image << "P3\n800 800\n255\n";
        for (int i = 0; i < 800; i++) {
            for (int j = 0; j < 800; j++)  {
                int val = value(i, j);
                my_Image << val << ' ' << 0 << ' ' << 0 << "\n";
            }
        }
        my_Image.close();
    }
    else {
        cout << "ERROR";
    }
    return 0;
}
