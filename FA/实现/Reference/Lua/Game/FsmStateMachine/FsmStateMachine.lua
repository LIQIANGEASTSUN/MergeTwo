---@class FsmStateMachine
local FsmStateMachine = class(nil, "FsmStateMachine")

function FsmStateMachine:ctor()
    self.stateMap = {}
    ---@type FsmStateBase
    self.currentState = nil
    self.ChangeStateEvent = nil
end

function FsmStateMachine:SetChangeStateEvent(callBack)
    self.ChangeStateEvent = callBack
end

function FsmStateMachine:Add(stateBase)
    local stateType = stateBase:GetStateType()
    stateBase:SetStateMachine(self)
    self.stateMap[stateType] = stateBase
end

---@return FsmStateBase
function FsmStateMachine:GetState(stateType)
    return self.stateMap[stateType]
end

---@return FsmStateBase
function FsmStateMachine:GetCurrentState()
    return self.currentState
end

function FsmStateMachine:SetCurrentState(state)
    self.currentState = state
end

function FsmStateMachine:ChangeState(toStateType, transitionData)
    local state = self:GetCurrentState()
    if nil ~= state and toStateType == state:GetStateType() then
        return
    end

    local fromState = -1
    if state ~= nil then
        fromState = state:GetStateType()
        state:SetToState(toStateType)
        state:OnExit()
    end

    ---@type FsmStateBase
    local toState = self.stateMap[toStateType]
    if toState == nil then
        -- console.error("FsmStateMachine toStateId is nil", toStateType) --@DEL
        self:SetCurrentState(nil)
        return nil
    end

    self:SetCurrentState(toState)
    toState:SetFromState(fromState)
    toState:TransitionData(transitionData)
    toState:OnEnter()
    toState:OnTick()

    if nil ~= self.ChangeStateEvent then
        self.ChangeStateEvent(toStateType, transitionData)
    end

    return toState
end

function FsmStateMachine:OnTick(dt)
    local state = self:GetCurrentState()
    if state == nil then
        return
    end

    state:OnTick(dt)
    local transitionMap = state:GetTransitionsMap()
    for _, transition in pairs(transitionMap) do
        local result, toState, transitionData = transition.CanTransition()
        if result then
            self:ChangeState(toState, transitionData)
            break
        end
    end
end

function FsmStateMachine:OnExit()
    local state = self:GetCurrentState()
    if nil ~= state then
        state:OnExit()
        --self:SetCurrentState(nil)
    end
end

return FsmStateMachine