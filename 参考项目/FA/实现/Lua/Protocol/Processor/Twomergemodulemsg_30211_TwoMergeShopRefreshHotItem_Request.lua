local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30211_TwoMergeShopRefreshHotItem_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30211_TwoMergeShopRefreshHotItem_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeShopRefreshHotItemResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30211_TwoMergeShopRefreshHotItem_Request with params: ", params.cfgId, params.refreshType, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeShopRefreshHotItemRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.refreshType ~= nil then
        request.refreshType = params.refreshType
    end
    ConnectionManager:sendRequest(30211, request, callbacks, extraParams, showLoading)
end

return processor_func
