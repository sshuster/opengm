#ifndef NOVIGRA
template<class GM,class ACC>
void export_intersection_based();
#endif   



#if !defined(NOVIGRA) && (defined(WITH_QPBO) || (defined(WITH_BLOSSOM5) && defined(WITH_PLANARITY) ) )
template<class GM,class ACC>
void export_cgc();
#endif
