local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30203_UseTwoMergeItem_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30203_UseTwoMergeItem_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.UseTwoMergeItemResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30203_UseTwoMergeItem_Request with params: ", params.cfgId, params.gridInfo, params.itemId, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.UseTwoMergeItemRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.gridInfo ~= nil then
        if params.gridInfo.position ~= nil then
            request.gridInfo.position = params.gridInfo.position
        end
        if params.gridInfo.itemId ~= nil then
            request.gridInfo.itemId = params.gridInfo.itemId
        end
        if params.gridInfo.count ~= nil then
            request.gridInfo.count = params.gridInfo.count
        end
        if params.gridInfo.itemData ~= nil then
            request.gridInfo.itemData = params.gridInfo.itemData
        end
        if params.gridInfo.state ~= nil then
            request.gridInfo.state = params.gridInfo.state
        end
        if params.gridInfo.itemState ~= nil then
            request.gridInfo.itemState = params.gridInfo.itemState
        end
        if params.gridInfo.itemStateData ~= nil then
            request.gridInfo.itemStateData = params.gridInfo.itemStateData
        end
    end
    if params.itemId ~= nil then
        request.itemId = params.itemId
    end
    ConnectionManager:sendRequest(30203, request, callbacks, extraParams, showLoading)
end

return processor_func
