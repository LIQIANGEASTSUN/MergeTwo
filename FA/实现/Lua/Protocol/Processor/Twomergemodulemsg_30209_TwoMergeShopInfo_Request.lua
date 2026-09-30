local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30209_TwoMergeShopInfo_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30209_TwoMergeShopInfo_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeShopInfoResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30209_TwoMergeShopInfo_Request with params: ", params.cfgId, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeShopInfoRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    ConnectionManager:sendRequest(30209, request, callbacks, extraParams, showLoading)
end

return processor_func
