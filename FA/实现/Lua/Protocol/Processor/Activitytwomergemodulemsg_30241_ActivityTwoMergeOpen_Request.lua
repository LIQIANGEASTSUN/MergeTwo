local ActivityTwoMergeModuleMsg_pb = require "Protocol.Message.ActivityTwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Activitytwomergemodulemsg_30241_ActivityTwoMergeOpen_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Activitytwomergemodulemsg_30241_ActivityTwoMergeOpen_Request() call back success!") --@DEL
            local response = ActivityTwoMergeModuleMsg_pb.ActivityTwoMergeOpenResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Activitytwomergemodulemsg_30241_ActivityTwoMergeOpen_Request with params: ", params.activityId, nil) --@DEL
    local request = ActivityTwoMergeModuleMsg_pb.ActivityTwoMergeOpenRequest()

    --#insertAssignRequestParamenters
    if params.activityId ~= nil then
        request.activityId = params.activityId
    end
    ConnectionManager:sendRequest(30241, request, callbacks, extraParams, showLoading)
end

return processor_func
