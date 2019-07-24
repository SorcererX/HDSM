#include "hdsmimpl.h"

HDSMImpl::HDSMImpl() : m_maxDisparity( -1 )
                     , m_level( 3 )
                     , m_cleanUp( 0.8 )
{
}

HDSMImpl::~HDSMImpl()
{
}

void HDSMImpl::init( int a_maxDisparity, unsigned int a_level, double a_cleanUp )
{
    m_maxDisparity = a_maxDisparity;
    m_level = a_level;
    m_cleanUp = a_cleanUp;
}

void HDSMImpl::setMaxDisparity( int a_maxDisparity )
{
    m_maxDisparity = a_maxDisparity;
}

void HDSMImpl::setLevel( unsigned int a_level )
{
    m_level = a_level;
}

void HDSMImpl::setCleanup( double a_cleanUp )
{
    m_cleanUp = a_cleanUp;
}
