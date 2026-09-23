local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30214_TwoMergeRandomOrderCD_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30214_TwoMergeRandomOrderCD_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeRandomOrderCDResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30214_TwoMergeRandomOrderCD_Request with params: ", params.cfgId, params.endTime, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeRandomOrderCDRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.endTime ~= nil then
        request.endTime = params.endTime
    end
    ConnectionManager:sendRequest(30214, request, callbacks, extraParams, showLoading)
end

return processor_func
