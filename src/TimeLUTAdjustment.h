// #ifndef TIMELUTADJUSTMENT_H
// #define TIMELUTADJUSTMENT_H

// #include <AdjustmentBase.h>
// #include <TimeAdjustment.h>

// class TimeLUTAdjustment: public AdjustmentBase {
// public:
// 	TimeLUTAdjustment(TimeLUT* lut, const size_t cols, const effect_t fx);

// 	// return true when exiting the adjustment
// 	exit_t action(action_t act, int value = 0);

// 	// write a string representing the current state
// 	size_t summary_string(char* buf, size_t buf_size);

// 	// write a string representing the current edit mode and state
// 	size_t full_string(char* buf, size_t buf_size);

// private:

// 	enum {
// 		LIST,
// 		CTXT,
// 		TIME,
// 		VALUE
// 	} state;

// 	TimeLUT* lut;
// 	const size_t _cols;
// 	const effect_t fx;


// 	// stuff for the list state
// 	size_t index;
// 	Adjuster<size_t> scroll_adjr(&index, 0, 0, 1);
// 	Adjustment<size_t> scroll_adj(&scroll_adjr, "", "", fx);



// 	// stuff for the CTXT state
// 	// size_t context_opt;
// 	// static const char* context_names[]] = {
// 	// 	"Insert",
// 	// 	"Delete",
// 	// 	"Exit",
// 	// }
// 	// ExitAdjustment<EXIT_SAVE> insert_act;
// 	// ExitAdjustment<EXIT> delete_act;
// 	// ExitAdjustment<EXIT_CANCEL> exit_act;
// 	// AdjustmentBase* context_acts[] = {
// 	// 	&insert_act;
// 	// 	&delete_act;
// 	// 	&exit_act;
// 	// };
// 	// PickAdjustment context_menu(context_acts, context_names, sizeof(context_acts)/sizeof(AdjustmentBase*), _cols);
	
// 	//TimeAdjustment<false,false,false,true,true,false> time_adj;
// 	//Adjustment<uint8_t> value_adj;
// };

// #endif