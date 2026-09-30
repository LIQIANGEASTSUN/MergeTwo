local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30206_TwoMergeCostEnergy_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30206_TwoMergeCostEnergy_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeCostEnergyResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30206_TwoMergeCostEnergy_Request with params: ", params.cfgId, params.num, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeCostEnergyRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.num ~= nil then
        request.num = params.num
    end
    ConnectionManager:sendRequest(30206, request, callbacks, extraParams, showLoading)
end

return processor_func
