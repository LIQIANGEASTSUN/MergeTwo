local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30204_TwoMergeBuildingLevelUp_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30204_TwoMergeBuildingLevelUp_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeBuildingLevelUpResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30204_TwoMergeBuildingLevelUp_Request with params: ", params.cfgId, params.positions, params.sceneId, params.plantId, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeBuildingLevelUpRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.positions ~= nil then
        for i=1,#params.positions do
            request.positions:append(params.positions[i])
        end
    end
    if params.sceneId ~= nil then
        request.sceneId = params.sceneId
    end
    if params.plantId ~= nil then
        request.plantId = params.plantId
    end
    ConnectionManager:sendRequest(30204, request, callbacks, extraParams, showLoading)
end

return processor_func
