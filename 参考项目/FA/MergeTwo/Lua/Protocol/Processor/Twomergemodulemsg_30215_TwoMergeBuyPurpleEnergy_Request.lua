local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30215_TwoMergeBuyPurpleEnergy_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30215_TwoMergeBuyPurpleEnergy_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeBuyPurpleEnergyResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30215_TwoMergeBuyPurpleEnergy_Request with params: ", params.purpleShopCfgId, params.cost, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeBuyPurpleEnergyRequest()

    --#insertAssignRequestParamenters
    if params.purpleShopCfgId ~= nil then
        request.purpleShopCfgId = params.purpleShopCfgId
    end
    if params.cost ~= nil then
        request.cost = params.cost
    end
    ConnectionManager:sendRequest(30215, request, callbacks, extraParams, showLoading)
end

return processor_func
