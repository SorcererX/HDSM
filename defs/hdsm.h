#ifndef HDSM_H
#define HDSM_H
#include <memory>

class HDSMImpl;

class HDSM
{
public:
    HDSM();
    ~HDSM();
    void init( int a_maxDisparity, unsigned int a_level, double a_cleanUp );
    void setMaxDisparity( int a_maxDisparity );
    void setLevel( unsigned int a_level );
    void setCleanup( double a_cleanUp );

private:
    std::unique_ptr< HDSMImpl > m_pImpl;
};

#endif // HDSM_H
