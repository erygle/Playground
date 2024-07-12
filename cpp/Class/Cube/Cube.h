#pragma once

namespace cubc{
    class Cube{
        private:
            double length_;
        public:
            Cube(double length){
                length_ = length;
            }
            double getVolume();
            double getSurfaceArea();
            void getLength(double length);
    };
} // namespace Cube:
