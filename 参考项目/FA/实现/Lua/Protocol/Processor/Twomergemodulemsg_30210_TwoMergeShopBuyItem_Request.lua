local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30210_TwoMergeShopBuyItem_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30210_TwoMergeShopBuyItem_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeShopBuyItemResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30210_TwoMergeShopBuyItem_Request with params: ", params.cfgId, params.shopType, params.position, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeShopBuyItemRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.shopType ~= nil then
        request.shopType = params.shopType
    end
    if params.position ~= nil then
        request.position = params.position
    end
    ConnectionManager:sendRequest(30210, request, callbacks, extraParams, showLoading)
end

return processor_func
