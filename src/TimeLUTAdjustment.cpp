// #include "TimeLUTAdjustment.h"



// TimeLUTAdjustment::TimeLUTAdjustment(TimeLUT* lut, const size_t cols, const effect_t fx):
// 		lut(lut), _cols(cols), fx(fx) {}

// // return true when exiting the adjustment
// exit_t TimeLUTAdjustment::action(action_t act, int value = 0){

// 	switch(state){
// 	case LIST:{
// 		switch(act){
// 		case ACT_CTXT:
// 			state = CTXT;
// 			return NOEXIT;
// 		case ACT_ENTER:
// 			state = TIME;
// 		default:
// 			return scroll_adj.action(act, value);
// 		}
		
// 	}
// 	case CTXT:
// 		return EXIT;
// 	case TIME:
// 		return EXIT;
// 	case VALUE:
// 		return EXIT;
// 	}

// }

// // write a string representing the current state
// size_t TimeLUTAdjustment::summary_string(char* buf, size_t buf_size){
// 	return 0;
// }

// // write a string representing the current edit mode and state
// size_t TimeLUTAdjustment::full_string(char* buf, size_t buf_size){
// 	switch(state){
// 	case LIST:{
// 		buf[0] = '>';
// 		for(size_t i = 0; i < (buf_size / _cols) && i < lut.size; i++){
// 			size_t tlen = strftime(buf + i*_cols + 1, _cols-1, "(%H:%M:%S, ", localtime(&lut[index+i].x) );
// 			snprintf(buf+i*_cols+tlen + 1, _cols-tlen-1, "%3d)", lut[index+i].y );
// 			written += _cols;
// 		}
// 		return written;
// 	}
// 	}
// }