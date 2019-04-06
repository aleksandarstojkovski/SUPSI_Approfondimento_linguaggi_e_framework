#include "iostream"

namespace bar{

    class Alpha{
    public:
        Alpha(double v=-1) : m_v{v}{}
        void set(double v=0);
        virtual ~Alpha();
        operator double();

    private:
        double m_v;
    };


    class Beta : public Alpha {
    public:
        virtual ~Beta();
    };

}
