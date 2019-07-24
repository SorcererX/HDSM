#ifndef HDSM_IMPL_H
#define HDSM_IMPL_H

class HDSMImpl
{
public:
    HDSMImpl();
    ~HDSMImpl();
    void init( int a_maxDisparity, unsigned int a_level, double a_cleanUp );
    void setMaxDisparity( int a_maxDisparity );
    void setLevel( unsigned int a_level );
    void setCleanup( double a_cleanUp );

private:
    int m_maxDisparity;
    unsigned int m_level;
    double m_cleanUp;
};

#endif // HDSM_IMPL_H
