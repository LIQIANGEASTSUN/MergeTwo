local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30205_TwoMergeOpenGrid_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30205_TwoMergeOpenGrid_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeOpenGridResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30205_TwoMergeOpenGrid_Request with params: ", params.cfgId, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeOpenGridRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    ConnectionManager:sendRequest(30205, request, callbacks, extraParams, showLoading)
end

return processor_func
