local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30202_SynGridInfo_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30202_SynGridInfo_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.SynGridInfoResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30202_SynGridInfo_Request with params: ", params.cfgId, params.gridInfos, params.items, params.gotNewItems, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.SynGridInfoRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
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
    if params.items ~= nil then
        for i=1,#params.items do
            local itemsItem = request.items:add()
            local itemsItemData = params.items[i]
            if itemsItemData.itemTemplateId ~= nil then
                itemsItem.itemTemplateId = itemsItemData.itemTemplateId
            end
            if itemsItemData.count ~= nil then
                itemsItem.count = itemsItemData.count
            end
            if itemsItemData.cdTimes ~= nil then
                for k=1,#itemsItemData.cdTimes do
                    itemsItem.cdTimes:append(itemsItemData.cdTimes[k])
                end
            end
        end
    end
    if params.gotNewItems ~= nil then
        for i=1,#params.gotNewItems do
            request.gotNewItems:append(params.gotNewItems[i])
        end
    end
    ConnectionManager:sendRequest(30202, request, callbacks, extraParams, showLoading)
end

return processor_func
