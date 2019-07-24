#include "hdsm.h"
#include "hdsmimpl.h"

HDSM::HDSM() : m_pImpl( std::make_unique< HDSMImpl >() )
{
}

HDSM::~HDSM()
{
}

void HDSM::init( int a_maxDisparity, unsigned int a_level, double a_cleanUp )
{
   m_pImpl->init( a_maxDisparity, a_level, a_cleanUp );
}

void HDSM::setMaxDisparity( int a_maxDisparity )
{
    m_pImpl->setMaxDisparity( a_maxDisparity );
}

void HDSM::setLevel( unsigned int a_level )
{
    m_pImpl->setLevel( a_level );
}

void HDSM::setCleanup( double a_cleanUp )
{
    m_pImpl->setCleanup( a_cleanUp );
}


