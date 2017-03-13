#include "TimeLUT.h"



// float interpolate(std::map<time_t, float>& data, time_t x, time_t pd){
// 	typedef std::map<time_t, float>::const_iterator i_t;
// 	if(data.empty()) return 0;

// 	i_t i=data.upper_bound(x);



// 	if(i==data.end()){

// 		i_t l=data.end(); --l;
// 		i = data.begin();

// 		const float delta=(float)(x- l->first)/((i->first+pd) - l->first);
// 		return delta*i->second +(1-delta)*l->second;

// 	} else if (i==data.begin()) {

// 		i_t l=data.end(); --l;

// 		const float delta=(float)(x + pd - l->first)/((i->first + pd) - l->first);
// 		return delta*i->second +(1-delta)*l->second;

// 	} else {
// 		i_t l=i; --l;

// 		const float delta=(float)(x- l->first)/(i->first - l->first);
// 		return delta*i->second +(1-delta)*l->second;
// 	}
// }