local TwoMergeModuleMsg_pb = require "Protocol.Message.TwoMergeModuleMsg_pb"

local processor_func = function(params, funcFailedCbk, funcSuccessCbk, extraParams, showLoading)
    local callbacks = {
        onFailed = function(strMSG)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30212_TwoMergeGuide_Request() is called failed, error: "..strMSG) --@DEL
            Runtime.InvokeCbk(funcFailedCbk, strMSG)
        end,
        onSuccess = function(subMsg)
            console.print("<<<<< RECEIVED Twomergemodulemsg_30212_TwoMergeGuide_Request() call back success!") --@DEL
            local response = TwoMergeModuleMsg_pb.TwoMergeGuideResponse()
            response:ParseFromString(subMsg.msgBody)
            Runtime.InvokeCbk(funcSuccessCbk, response)
        end
    }

    console.print(">>>>> SENDING Twomergemodulemsg_30212_TwoMergeGuide_Request with params: ", params.cfgId, params.guideInfo, nil) --@DEL
    local request = TwoMergeModuleMsg_pb.TwoMergeGuideRequest()

    --#insertAssignRequestParamenters
    if params.cfgId ~= nil then
        request.cfgId = params.cfgId
    end
    if params.guideInfo ~= nil then
        if params.guideInfo.mainKey ~= nil then
            request.guideInfo.mainKey = params.guideInfo.mainKey
        end
        if params.guideInfo.subKey ~= nil then
            request.guideInfo.subKey = params.guideInfo.subKey
        end
    end
    ConnectionManager:sendRequest(30212, request, callbacks, extraParams, showLoading)
end

return processor_func
