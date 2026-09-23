local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30213_TwoMergeRandomOrder_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30213_TwoMergeRandomOrder_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeRandomOrderResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30213_TwoMergeRandomOrder_Request with params: ", params.cfgId, params.orderInfo, params.endTime, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeRandomOrderRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.orderInfo ~= nil then
        if params.orderInfo.orderId ~= nil then
            request.orderInfo.orderId = params.orderInfo.orderId
        end
        if params.orderInfo.difficult ~= nil then
            request.orderInfo.difficult = params.orderInfo.difficult
        end
        if params.orderInfo.orderItems ~= nil then
            for j=1,#params.orderInfo.orderItems do
                local orderItemsItem = request.orderInfo.orderItems:add()
                local orderItemsItemData = params.orderInfo.orderItems[j]
                if orderItemsItemData.itemId ~= nil then
                    orderItemsItem.itemId = orderItemsItemData.itemId
                end
                if orderItemsItemData.count ~= nil then
                    orderItemsItem.count = orderItemsItemData.count
                end
            end
        end
    end
    if params.endTime ~= nil then
        request.endTime = params.endTime
    end
    ConnectionManager:sendRequest(30213, request, callbacks, extraParams, showLoading)
end

return processor_func
