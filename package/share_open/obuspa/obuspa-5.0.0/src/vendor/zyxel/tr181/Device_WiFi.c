
/**
 *
 * Implements the Device.XXX data model object
 *
 */
#include "device_data_node_api.h"
//------------------------------------------------------------------------------
// Data model path strings
#define DEVICE_WIFI "Device.WiFi"
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
// Ccached values of ip parameter


//------------------------------------------------------------------------------
// Data node callback functions

int DEVICE_WIFI_Get_Value_CB(dm_req_t *req, char *buf, int len){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return Get_Object_Parameter_Value(req,buf,len);
}
int DEVICE_WIFI_Set_Value_CB(dm_req_t *req, char *buf){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return Set_Object_Parameter_Value(req,buf);
}
int DEVICE_WIFI_Add_CB(dm_req_t *req){
	//USP_LOG_Debug("req->path[%s] \n",req->path);
	return Add_Object_Node(req);
}
int DEVICE_WIFI_Del_CB(dm_req_t *req){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return Del_Object_Node(req);
}
int DEVICE_WIFI_Validate_Value_CB(dm_req_t *req, char *value){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}
int DEVICE_WIFI_Notify_Set_CB(dm_req_t *req, char *value){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}
int DEVICE_WIFI_Validate_Add_CB(dm_req_t *req){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}
int DEVICE_WIFI_Notify_Add_CB(dm_req_t *req){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}
int DEVICE_WIFI_Validate_Del_CB(dm_req_t *req){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}
int DEVICE_WIFI_Notify_Del_CB(dm_req_t *req){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}
int DEVICE_WIFI_Sync_Oper_CB(dm_req_t *req, char *command_key,kv_vector_t *input_args, kv_vector_t *output_args){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}
int DEVICE_WIFI_Async_Oper_CB(dm_req_t *req, kv_vector_t *input_args,int instance){
	//USP_LOG_Debug("req->path[%s]\n",req->path);
	return USP_ERR_OK;
}

DM_REGISTER_DATA_NODE_CB Register_DEVICE_WIFI = {
	DEVICE_WIFI_Get_Value_CB,
	DEVICE_WIFI_Set_Value_CB,
	DEVICE_WIFI_Add_CB,
	DEVICE_WIFI_Del_CB,
	DEVICE_WIFI_Validate_Value_CB,
	DEVICE_WIFI_Notify_Set_CB,
	DEVICE_WIFI_Validate_Add_CB,
	DEVICE_WIFI_Notify_Add_CB,
	DEVICE_WIFI_Validate_Del_CB,
	DEVICE_WIFI_Notify_Del_CB,
	DEVICE_WIFI_Sync_Oper_CB,
	DEVICE_WIFI_Async_Oper_CB
};

//------------------------------------------------------------------------------
//Entry point base functions : DEVICE_WIFI_Init ,DEVICE_WIFI_Start ,DEVICE_WIFI_Stop

int DEVICE_WIFI_Init(void) {
	int err = USP_ERR_OK;
	// Register parameters implemented by this component
	err |= Register_Object_Node(DEVICE_WIFI,&Register_DEVICE_WIFI);

	return err;
}
int DEVICE_WIFI_Start(void) {
	int err = USP_ERR_OK;
	err |= Sync_Object_NumberOfEntries_Node(DEVICE_WIFI);
	return err;
}
int DEVICE_WIFI_Stop(void) {

	return USP_ERR_OK;
}


