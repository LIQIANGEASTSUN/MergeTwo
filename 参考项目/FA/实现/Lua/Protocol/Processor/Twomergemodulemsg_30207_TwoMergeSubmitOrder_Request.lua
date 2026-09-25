local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30207_TwoMergeSubmitOrder_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30207_TwoMergeSubmitOrder_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeSubmitOrderResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30207_TwoMergeSubmitOrder_Request with params: ", params.cfgId, params.orderId, params.gridInfos, params.waitItems, params.orderType, params.endTime, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeSubmitOrderRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.orderId ~= nil then
        request.orderId = params.orderId
    end
    if params.gridInfos ~= nil then
        for i=1,#params.gridInfos do
            local gridInfosItem = request.gridInfos:add()
            local gridInfosItemData = params.gridInfos[i]
            if gridInfosItemData.position ~= nil then
                gridInfosItem.position = gridInfosItemData.position
            end
            if gridInfosItemData.itemId ~= nil then
                gridInfosItem.itemId = gridInfosItemData.itemId
            end
            if gridInfosItemData.count ~= nil then
                gridInfosItem.count = gridInfosItemData.count
            end
            if gridInfosItemData.itemData ~= nil then
                gridInfosItem.itemData = gridInfosItemData.itemData
            end
            if gridInfosItemData.state ~= nil then
                gridInfosItem.state = gridInfosItemData.state
            end
            if gridInfosItemData.itemState ~= nil then
                gridInfosItem.itemState = gridInfosItemData.itemState
            end
            if gridInfosItemData.itemStateData ~= nil then
                gridInfosItem.itemStateData = gridInfosItemData.itemStateData
            end
        end
    end
    if params.waitItems ~= nil then
        for i=1,#params.waitItems do
            request.waitItems:append(params.waitItems[i])
        end
    end
    if params.orderType ~= nil then
        request.orderType = params.orderType
    end
    if params.endTime ~= nil then
        request.endTime = params.endTime
    end
    ConnectionManager:sendRequest(30207, request, callbacks, extraParams, showLoading)
end

return processor_func
